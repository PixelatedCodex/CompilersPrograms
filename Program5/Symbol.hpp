/**
 * Heather Aust
 * COSC 4785 Fall 2019
 * Program 05
 * November 19, 2019
 */

#ifndef SYMBOL_HPP
#define SYMBOL_HPP

#include "SymbolTable.hpp"
#include <iostream>
#include <string>

using namespace std;

class Symbol {
public:
  
  Symbol(string i, string t){
    id = i;
    type = t;
    rtntype = "";
  }
  
  Symbol(string i, string t, string r){
    id = i;
    type = t;
    rtntype = r;
  }
  
  void setParams(vector <string> p){
    params = p;
  }
  
  void print (ostream& out){
    if(!out) return;
    out << id << " " << type << " " << rtntype;
    
    int size = 0;
    if(!params.empty()){
      size = params.size();
      out<<" <-";
      for (int i = 0; i < size; i++) {
	out << " " << params.at(i);
      }
    }
  }
  
protected:
  string id, type, rtntype;
  vector<string> params;
};

#endif