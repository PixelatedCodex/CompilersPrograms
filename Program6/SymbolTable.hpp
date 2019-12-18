/**
 * Heather Aust
 * COSC 4785 Fall 2019
 * Program 06
 * December 8, 2019
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
    tableID = new Symbol("program6", "");
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
  /**
   * looks to see if it already exists
   * returns true if it does exist
   * returns false if it doesn't exist
   */
  bool lookup(string id, string type, string rtn){
    // first lookup in this symbol table
    int size = 0;
    if(!symbs.empty()){
      size = symbs.size();
      for (int i = 0; i < size; i++) {
        if(symbs.at(i)->isSame(id,type,rtn)){
          return true;
        }
      }
    }
    // then check parent symbol table
    if(parent){
      return parent-> lookup(id, type, rtn);
    }
    return false;
  }
  /**
   * checks a table ID
   * returns true if it does exist
   * returns false if it doesn't exist
   */
  bool lookupChild(string id, string type, string rtn){
    if(tableID->isSame(id, type, rtn)){
      return true;
    }
    return false;
  }
  
  string lookupType(string id){
    // Given an id, try to find it in the symbol table
    // first lookup in this symbol table
    int size = 0;
    if(!symbs.empty()){
      size = symbs.size();
      for (int i = 0; i < size; i++) {
	//cout<<"symbs.at(i)->id " << symbs.at(i)->id << endl;
	//cout<<"id: " << id << endl;
        if(id.compare(symbs.at(i)->id) == 0){
	  //cout<<"returning type: "<<symbs.at(i)->type<<endl;
          return symbs.at(i)->type; 
        }
      }
    }
    // Then check this symbol table's symbol
    if(id.compare(tableID->id) == 0){
      return tableID->id; 
    }
    
    // then check parent symbol table
    if(parent){
      //cout<<"checking parent: "<<parent<<endl;
      return parent->lookupType(id);
    }
    return "";
  }
  
  string lookupType(string id, string symb){
    //first try and find the id, then look for symb in that id's symbol table
    int size = 0;
    if(!symbs.empty()){
      size = symbs.size();
      for (int i = 0; i < size; i++) {
        if(id.compare(symbs.at(i)->id) == 0){
          return lookupType(symb); 
        }
      }
    }
    // Then check this symbol table's symbol
    if(id.compare(tableID->id) == 0){
      return lookupType(symb); 
    }
    
    // then check parent symbol table
    if(parent){
      return parent->lookupType(symb);
    }
    return "";
  }
  
  bool findConstructorOrMethod(string findid, string & typefound){
    //check this symbol id
    if(tableID){
      if(tableID->isConstructorOrMethod(findid, typefound)){
	return true;
      }
    }
    if(!tables.empty()){
      int size = tables.size();
      for(int i = 0; i < size; i++){
	if(tables.at(i)->getTableID()->isConstructorOrMethod(findid, typefound)){
	  return true;
	}
      }
    }
    // check parent symbol id
    if(parent){
      return parent->findConstructorOrMethod(findid, typefound);
    }
    return false;
  }
  
  Symbol* getTableID(){
    return tableID;
  }
  /**
   * Tries to add a symbol to the current symbol table
   * @param i: id of symbol
   * @param t: type of symbol
   * @param r: return type of symbol
   * @param p: print type of symbol
   * 
   * @return true if it inserted it
   *         false if it doesn't insert it
   */
  bool insert(string i, string t, string r, string p){
    //Check to see if it already exists
    if(lookup(i, t, r)){
      return false;
    }
    // If not, add it
    Symbol* tmp=new Symbol(i,t,r,p);
    symbs.push_back(tmp);
    return true;
  }
  
  /**
   * Tries to add a symbol to the current symbol table
   * used when creating Variables
   */
  bool insert(string i, string t){
    //Check to see if it already exists
    if(lookup(i, t, "")){
      return false;
    }
    // If not, add it
    Symbol* tmp=new Symbol(i,t);
    symbs.push_back(tmp);
    return true;
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
   * Adds a child table and sets the parameter st as a pointer to that table
   * @return -1 if there isn't another table with the same name and rtn type
   *         array location of the other symbol table with the same name and rtn type
   */
  int addChildTable(Symbol *symb, SymbolTable*& st){
    //First check child tables to see if this exists
    int rtn = -1;
    int size = 0;
    if(!tables.empty()){
      size = tables.size();
      for (int i = 0; i < size; i++) {
        if(tables.at(i)->lookupChild(symb->id, symb->type, symb->rtntype)){
          rtn = i;
        }
      }
    }
    
    st = new SymbolTable(symb, this, level + 1);
    tables.push_back(st);
    return rtn;
  }
  
  string getClass() {
    string className;
    if(tableID->isClass(className)){
      return className;
    }
    else{
      return parent->getClass();
    }
  }
protected:
  Symbol* tableID;
  int level; // how deep this symbol table is, start at 0 for global table
  SymbolTable *parent; // 0 if there is no parent
  vector<Symbol*> symbs;
  vector<SymbolTable*> tables;
};

#endif