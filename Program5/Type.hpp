/**
 * Heather Aust
 * COSC 4785 Fall 2019
 * Program 05
 * November 19, 2019
 */

#ifndef TYPE_HPP
#define TYPE_HPP

#include "SymbolTable.hpp"
#include <iostream>
#include <string>

using namespace std;


class Type{
public:
  
  Type(string i, SymbolTable* s){
    id = i;
    table = s;
  }
  
  void print (ostream& out){
    if(!out) return;
    out << id << endl;
    if(table){
      table->print(out);
    }
  }
  
protected:
  string id;
  SymbolTable* table;
};

#endif