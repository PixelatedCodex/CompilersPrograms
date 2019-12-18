/**
 * Heather Aust
 * COSC 4785 Fall 2019
 * Program 05
 * November 19, 2019
 */

#ifndef SYMBOLTABLE_HPP
#define SYMBOLTABLE_HPP

#include <iostream>
#include <string>
#include <vector>
#include "Symbol.hpp"

using namespace std;

class SymbolTable{
public:
  /**
   * Constructor for symbol table
   * @param: p = pointer to parent symbol table
   * @param: l = int value for current level (1 + parent level)
   */
  SymbolTable(SymbolTable* p, int l){
    tableID = new Symbol("program 5", "", "");
    parent = p;
    level = l;
  }
  /**
   * Constructor for symbol table
   * @param: p = pointer to parent symbol table
   */
  SymbolTable(Symbol* s, SymbolTable* p, int l){
    tableID = s;
    parent = p;
    level = l;
  }
  
  bool lookup(){
    
    return false;
  }
  
  /**
   * Tries to add a symbol to the current symbol table
   */
  bool insert(string i, string t, string r){
    //Check to see if it already exists
    
    // If not, add it
    Symbol* tmp=new Symbol(i,t,r);
    symbs.push_back(tmp);
    return false;
  }
  
  
  /**
   * Tries to add a symbol to the current symbol table
   */
  bool insert(string i, string t){
    return insert(i, t, "");
  }
  
  void print (ostream& out){
    if(!out) return;
    //cout<<"Level: " << level << endl;
    
    // Set up the indent for this current symbol table
    string indent = "";
    for (int i = 0; i < level-1; i++ ){
      indent += "  ";
    }
    
    // First print out the value of this table
    out << indent;
    tableID->print(out);
    out<<endl;
    
    // Then print all the symbols in this table
    indent += "  ";
    int size = 0;
    if(!symbs.empty()){
      size = symbs.size();
      for (int i = 0; i < size; i++) {
	out << indent;
	symbs.at(i)->print(out);
	out << endl;
      }
    }
    
    // Go though all the subtables and print their symbols
    size = 0;
    if(!tables.empty()){
      size = tables.size();
      for (int i = 0; i < size; i++) {
	tables.at(i)->print(out);
      }
    }
  }
  
  SymbolTable* getParent(){
    return parent;
  }
  int getLevel(){
    return level;
  }
  
  void setParams(vector<string> p){
    tableID->setParams(p);
  }
  /**
   * Adds a child table and returns a pointer to that table
   */
  SymbolTable* addChildTable(Symbol * symb){
    SymbolTable* st = new SymbolTable(symb, this, level + 1);
    tables.push_back(st);
    return st;
  }
  
protected:
  Symbol* tableID;
  int level; // how deep this symbol table is, start at 0 for global table
  SymbolTable *parent; // 0 if there is no parent
  vector<Symbol*> symbs;
  vector<SymbolTable*> tables;
};

#endif