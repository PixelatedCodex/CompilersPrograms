// program2.cpp
// Heather Aust
// COSC 4785 Fall 2019
// Program 02
// September 25, 2019

#include <FlexLexer.h>
#include "program2.hpp"

using namespace std;


//Globals
int rtn;
yyFlexLexer myScanner;

string keywords[12] = {"int", "void", "class", "new", "print", "read", 
  "return", "while", "if", "else", "this", "null" };

extern int yyColumn;
extern int yyRow;

/**
 * Given a value for a token, it returns the string of the name of the token
 */
string getToken(int key){
  switch(key) {
    case LBRACK:
      return "LBRACK";
    case RBRACK:
      return "RBRACK";
    case LBRACE:
      return "LBRACE";
    case RBRACE:
      return "RBRACE";
    case NEQ:
      return "NEQ";
    case EQ:
      return "EQ";
    case LT:
      return "LT";
    case GT:
      return "GT";
    case LEQ:
      return "LEQ";
    case GEQ:
      return "GEQ";
    case AND:
      return "AND";
    case OR:
      return "OR";
    case NOT:
      return "NOT";
    case PLUS:
      return "PLUS";
    case MINUS:
      return "MINUS";
    case TIMES:
      return "TIMES";
    case DIV:
      return "DIV";
    case MOD:
      return "MOD";
    case SEMI:
      return "SEMI";
    case COMMA:
      return "COMMA";
    case LPAREN:
      return "LPAREN";
    case RPAREN:
      return "RPAREN";
    case ASSIGN:
      return "ASSIGN";
    case COMMENT:
      return "COMMENT";
    case DOT:
      return "DOT";
    case INT:
      return "INT";
    case VOID:
      return "VOID";
    case CLASS:
      return "CLASS";
    case NEW:
      return "NEW";
    case PRINT:
      return "PRINT";
    case READ:
      return "READ";
    case RETURN:
      return "RETURN";
    case WHILE:
      return "WHILE";
    case IF:
      return "IF";
    case ELSE:
      return "ELSE";
    case THIS:
      return "THIS";
    case NULLT:
      return "NULLT";
    case IDENTIFIER:
      return "INDENTIFIER";
    case NUMBER:
      return "NUMBER";
    case ER_CH:
      return "ER_CH";
    case ER_WD:
      return "ER_WD";
    case ERRORS:
      return "ERRORS";
  }
  return "Token not found";
}

int main() {
  // Print the header
  cout << "Line\tColumn\tToken\t\tValue\n";

  while((rtn = myScanner.yylex()) != 0) {
    if ( rtn == ERRORS ){
      cout<< "Too many errors, exiting program\n";
      return ERRORS;
    }
    //Print the information
    cout << yyRow << "\t" << yyColumn << "\t" << getToken(rtn) << "\t";
    
    // only print value for identifier and number AND ERRORS   
    if(rtn == IDENTIFIER || rtn == NUMBER || rtn == ER_CH || rtn == ER_WD){
      if(rtn != IDENTIFIER){ //get the format to look correct when printed
	cout <<"\t";
      }
      cout << myScanner.YYText();
    }
    cout <<"\n";
    yyColumn += myScanner.YYLeng(); // increment column
  }
  return 0;
}
