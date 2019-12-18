/**
 * Heather Aust
 * COSC 4785 Fall 2019
 * Program 04
 * October 31, 2019
 */

#ifndef ERRVAL_HPP
#define ERRVAL_HPP

#include<iostream>
#include<string>

class ErrVal{
public:
  ErrVal(int r, int c, string s){
    row = r;
    col = c;
    msg = s;
  }
  
  /* 
   * Given the string at the row
   */
  void print(string line, ostream *out = 0){
    // print in following format
    // r:c 'entire line' 
    // ^ pointing to error
    // error information
    
    // subtract 2 from yyrow because : vectors start at 0, 
    // and yyrow is already on the next line
    *out << row <<":" << col <<" "<< line;
    
    //figure out how many characters in "r:c " and add to col
    int temp = col + 1; // Account for ':' and ' ' and decrease 1 for ^
    temp += numDigits(col);
    temp += numDigits(row);
    
    
    for(int i = 0; i < temp; i++){
      *out<<" ";
    }
    *out << "^" << endl;
    *out << msg << endl << endl;
  }
  
  int getRow(){
    return row;
  }
  
protected:
  int row, col;
  string msg;
  /*
  * Given num, return how many digits are in num
  */
  int numDigits(int num){
    int dig = 0;
    while(num){
      num /= 10;
      dig++;
    }
    return dig;
  }
};

#endif