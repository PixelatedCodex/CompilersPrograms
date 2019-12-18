// program4.cpp
// Heather Aust
// COSC 4785 Fall 2019
// Program 04
// October 31, 2019

#include<iostream>
#include<fstream>
#include<string>
#include <vector>
#include "node.hpp"
#include "errVal.hpp"
#include "program4.tab.hpp"
#include <FlexLexer.h>

using namespace std;


//Globals
int rtn;
yyFlexLexer scanner;
Node *tree;
extern int yyColumn;
extern int yyPrevColumn;
extern int yyRow;
extern vector<string> lines;
extern vector<ErrVal*> errors;
extern string currLine;


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
  //cout<<"Printing Errors"<<endl;
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

  yyparse();
  printErrors();
  cout << endl;
  if(tree){
    tree->printPreOrder(&cout);
  }
  cout << endl;

  return 0;
}
