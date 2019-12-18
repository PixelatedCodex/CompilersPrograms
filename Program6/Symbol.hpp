/**
 * Heather Aust
 * COSC 4785 Fall 2019
 * Program 06
 * December 8, 2019
 */

#ifndef SYMBOL_HPP
#define SYMBOL_HPP

#include "SymbolTable.hpp"
#include <iostream>
#include <string>

using namespace std;

class Symbol {
public:
  // id = custom name programmer uses
  // type = what type is it (method_type, constructor_type, etc)
  // printtype = used exclusively for Methods and Constructors when printing
  string id, type, rtntype, printtype, printid;
  vector<string> params;
  
  /**
   * Constructor for Variables
   */
  Symbol(string i, string t){
    id = i;
    printid = i;
    type = t;
    rtntype = "";
    printtype = t;
  }
  
  /**
   * Constructor for Constructors and Methods
   */
  Symbol(string i, string t, string r, string p){
    id = i;
    printid = i;
    type = t;
    rtntype = r;
    printtype = p;
  }
  
  /**
   * Note: the strings are only the types for each param
   */
  void setParams(vector <string> p){
    params = p;
    int size = 0;
    if(!params.empty()){
      size = params.size();
      for (int i = 0; i < size; i++) {
        id += params.at(i);
      }
    }
  }
  
  bool isSame(string i, string t, string r){
    if(id.compare(i) == 0){
      if(type.compare(t) == 0){
        if(rtntype.compare(r) == 0 ){
          return true;
        }
      }
    }
    return false;
  }
  bool isClass(string& className){
    //check to see if class type == class_type
    if(printtype == "class_type"){
      className = id;
      return true;
    }
    return false;
  }
  
  bool isConstructorOrMethod(string findid, string &typefound) {
    if(findid == id) {
      if(printtype == "constructor_type" || printtype == "class_type"){
	return true;
      }
      typefound = rtntype;
    }
    return false;
  }
  void print (ostream& out){
    if(!out) return;
    out << printid << " " << printtype << " " << rtntype;
    
    int size = 0;
    if(!params.empty()){
      size = params.size();
      out<<" <-";
      for (int i = 0; i < size; i++) {
        out << " " << params.at(i);
      }
    }
  }
  
};

#endif