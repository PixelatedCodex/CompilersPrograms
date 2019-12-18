/**
 * Heather Aust
 * COSC 4785 Fall 2019
 * Program 06
 * December 8, 2019
 */

#ifndef TYPETABLE_HPP
#define TYPETABLE_HPP

#include "SymbolTable.hpp"
#include "Symbol.hpp"
#include "ExprTree.hpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;


class TypeTable{
public:
  TypeTable(SymbolTable* s, TypeTable* p){
    table = s;
    parent = p;
  }
  
  void typeCheck(){
    int size = 0;
    if(!expressions.empty()){
      size = expressions.size();
      for (int i = 0; i < size; i++) {
        string tmp = expressions.at(i)->typeCheck(table);
      }
    }
    size = 0;
    if(!tables.empty()){
      size = tables.size();
      for(int i = 0; i < size; i++){
        tables.at(i)->typeCheck();
      }
    }
  }
  
  TypeTable* getParent(){
    return parent;
  }
  
  void addNewTypeExpression(ExprTree* t){
    expressions.push_back(t);
  }
  
  TypeTable* addChildTable(SymbolTable *st){
    TypeTable* tt = new TypeTable(st, this);
    tables.push_back(tt);
    return tt;
  }
protected:
  SymbolTable* table;
  vector<ExprTree*> expressions; //this is to store an entire statment
  vector<TypeTable*>tables;
  TypeTable *parent;
};

#endif