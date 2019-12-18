/**
 * Heather Aust
 * COSC 4785 Fall 2019
 * Program 06
 * December 8, 2019
 */

#ifndef EXPRTREE_HPP
#define EXPRTREE_HPP

#include <iostream>
#include <string>

extern void yyaddTypeError(const char *, int, int);

using namespace std;

class ExprTree {
public:
  ExprTree(string str, int r, int c){
    id = str;
    expType = 0;
    lchild = 0;
    rchild = 0;
    row = r;
    col = c;
  }
  ExprTree(int t, int r, int c){
    id = "";
    expType = t;
    lchild = 0;
    rchild = 0;
    row = r;
    col = c;
  }
  bool addChild(ExprTree* child){
    if(!lchild){
      lchild = child;
    }
    else if(!rchild) {
      rchild = child;
    }
    else {
     return false;
    }
    return true;
  }
  
  ExprTree* getRightChild(){
    //if I can have a right child return right child
    if(expType != 0 && expType != 4){
      return rchild;
    }
    else {
      return this;
    }
  }
  void replaceRightChild(ExprTree* child){
    rchild = child;
  }
  string getType(){
    //have to account for [][]'s
    int loc = id.find("[");
    string bracks = "";
    string lookfor = id;
    if(loc > 0){
      bracks = id.substr(loc, id.size());
      lookfor = id.substr(0, loc);
    }
    //First check to see if it's one of the defaults
    if(lookfor == "int" || lookfor == "void" || lookfor == "null"){
      lookfor += bracks;
      return lookfor;
    }
    else {
      return symbTable->lookupType(lookfor) + bracks;
    }
  }
  string brackExpTypeCheck(){
    // go through all bracketexpressions
    int size = 0;
    string str;
    if(!brackExps.empty()){
      size = brackExps.size();
      for (int i = 0; i < size; i++) {
        str = brackExps.at(i)->typeCheck(symbTable);
        if(str != "int"){
          yyaddTypeError("Invalid bracket expression, must evaluate to an int", row, col);
        }
        id += "[]";
        // for each bracketexp, add [] to id
      }
    }
    //return what type id is
    return id;
  }
  
  string mathTypeCheck(){
    // make sure the types of both children are == "int"
    string rtn = "int";

    if(lchild->typeCheck(symbTable) != "int"){
      yyaddTypeError("Invalid lvalue", row, col);
      rtn = "";
    }

    if(rchild->typeCheck(symbTable) != "int"){
      yyaddTypeError("Invalid rvalue", row, col);
      rtn = "";
    }
    return rtn;
  }
  
  string assignTypeCheck(){
    // make sure the types of both children are == of the same type
    //cout<<"in assignTypeCheck(); \n";
    string str = lchild->typeCheck(symbTable);
    if( str != rchild->typeCheck(symbTable)){
      yyaddTypeError("lvalue and rvalue are not of the same type", row, col);
    }
    str = rchild->typeCheck(symbTable);
    return str;
  }
  
  string typeCheck(SymbolTable * st){
    symbTable = st;
    switch (expType) {
      case 0: // End node, get the type for the id
	
        return getType();
      case 1: // Math type
        return mathTypeCheck();
      case 2: // Assign type
        return assignTypeCheck();
      case 3: // Bracket Expression typeCheck
        return brackExpTypeCheck();
      case 4:
        return lchild->typeCheck(st);
      default:
        return getType();
    }
  }
  
protected:
  ExprTree *lchild, *rchild;
  int row, col; // row & col error occurred on
  SymbolTable *symbTable;
  vector <ExprTree*> brackExps;
  
  /**
   * 0 = end node, returns id as it's type
   * 1 = math type, checks to make sure both children are of type int
   * 2 = assign type, makes sure both children are of the same type
   * 3 = bracket expr type
   * 4 = parenthesis operators
   */
  int expType; //What type of expression is it
  string id;
};

#endif