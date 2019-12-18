// program5.cpp
// Heather Aust
// COSC 4785 Fall 2019
// Program 06
// December 8, 2019

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "node.hpp"
#include "SymbolTable.hpp"
#include "TypeTable.hpp"
#include "errVal.hpp"
#include "program6.tab.hpp"
#include <FlexLexer.h>

using namespace std;


//Globals
int rtn;
yyFlexLexer scanner;
Node *tree;
SymbolTable *symbTable;
TypeTable *typeTable;
extern int yyColumn;
extern int yyPrevColumn;
extern int yyRow;
extern vector<string> lines;
extern vector<ErrVal*> errors;
extern string currLine;
extern ExprTree* currExpTree;
extern ExprTree* currExpTreeHead;
extern SymbolTable* currSymbTable;
extern string lrvalue;
extern void yyadderror(const char *);


/**
 * FOR USE BY YPP FILE ONLY ************************************************
 */
void addAssignExpr(){
  ExprTree* expTree;
  // Assign type is always the top of the tree
  if(!currExpTree) {
    cout<<"Error 1, this state should not be reached"<< endl;
  }
  else {
    // If it's not empty, then set the currExpTree as the left child
    expTree = new ExprTree(2, yyRow, yyPrevColumn);
    currExpTreeHead = expTree;
    expTree->addChild(currExpTree);
    // and update the currExpTree
    currExpTree = expTree;
  }
}
void addMathExpr(){
  ExprTree* expTree = new ExprTree(1, yyRow, yyPrevColumn);
  
  // if tree is empty, set currExpTree as type and left node as lrvalue
  if(!currExpTree){
    yyadderror("Cannot have assign operator without a valid lvalue");
  }
  else {
    // if the rval of the current tree is filled
    ExprTree* child = currExpTree->getRightChild();
    if(child) {
      // set that rchild as the new tree's left child
      //cout<<"Replacing rchild"<<endl;
      expTree->addChild(child);
      currExpTree->replaceRightChild(expTree);
      currExpTree = expTree;
      
    }
    else {
      currExpTree = expTree;
    }
  }
}

void addStringExpr(){
  if(!currExpTree){
    currExpTree = new ExprTree(lrvalue, yyRow, yyPrevColumn);
  }
  else{
    ExprTree* expTree = new ExprTree(lrvalue, yyRow, yyPrevColumn);
    if(!currExpTree->addChild(expTree) ){
      //cout<< "Trying to add too many children to type, id: " << lrvalue << endl;
    }
  }
}

/**
  * 0 = end node, returns id as its type
  * 1 = math type, checks to make sure both children are of type int
  * 2 = assign type, makes sure both children are of the same type
  * 3 = bracket expression
  */
void addToCurrExpTree(int type){
  
  if(type == 2) {
    addAssignExpr();
  }
  else if(type == 1) { //start to math expression
    addMathExpr();
  }
  else if( type == 0){ // end node
    addStringExpr();
  }
  
  lrvalue = "";
}

bool verifyExpIsInt(){
  string str = currExpTree->typeCheck(currSymbTable);
  if(str == "int"){
    return true;
  }
  return false;
}

//Returns true if it is a constructor
bool findTypeById(string id, vector<string>* arglist, string & typefound){
  // check to see if it is a constructor
  // check to see if the parameters match
  // get the type for it
  int size = 0;
  if(!arglist->empty()){
    size = arglist->size();
    for(int i = 0; i < size; i++){
      id+= arglist->at(i);
    }
  }
  typefound = id;
  if (currSymbTable->findConstructorOrMethod(id, typefound)) {
    return true;
  }
  
  return false;
}

/**
 * END FOR USE BY YPP FILE ONLY ********************************************
 */

/**
 * Adds the current yytext to currLine
 * updates the value of yyColumn and yyRow
 */
void addToCurrLine(){
  yyPrevColumn = yyColumn;
  yyColumn += scanner.YYLeng();
  currLine += scanner.YYText();
}

/**
 * Adds the value in currLine to the vector of lines
 * updates the value of yyColumn and yyRow
 */
void newLine(){
  currLine += scanner.YYText();
  lines.push_back(currLine);
  yyPrevColumn = yyColumn;
  yyColumn = 1;
  yyRow++;
  currLine = ""; // clear the currentLine
}
/**
 * Prints out all the lines
 */
void printLines(){
  //cout<<"Printing Vector of Lines"<<endl;
  int size = 0;
  if(!lines.empty()){
    size = lines.size();
  }
  for (int i = 0; i < size; i++) {
        cout << lines.at(i); 
  }
  //cout << "Size: "<< size << endl;
}

/**
 * Print out all errors
 * If no errors, print nothing
 */
void printErrors(){
  int size = 0;
  int rowct = 0;
  if(!errors.empty()){
    size = errors.size();
  }
  if(!lines.empty()){
    rowct = lines.size();
  }
  int row;
  for (int i = 0; i < size; i++) {
      row = errors.at(i)->getRow() - 1;
      if(row < rowct){
        errors.at(i)->print(lines.at(row), &cout); 
      }
  }
  //cout << "Size: "<< size << endl;
}

int main(int argc, char **argv)
{
  tree = 0;
  symbTable = new SymbolTable(0, 0); // no parent, main symbol table
  typeTable= new TypeTable(symbTable, 0);

  yyparse();
  //cout<<"attempting to typecheck\n";
  if(typeTable){
    typeTable->typeCheck();
  }
  //cout<<"attempting to print errors\n";
  printErrors();
  cout << endl;
  
  /*if(tree){
    tree->printPreOrder(&cout);
  }*/
  
  if(symbTable){
    symbTable->print(cout);
  }
  cout << endl;
  

  return 0;
}
