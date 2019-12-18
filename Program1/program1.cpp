// program1.cpp
// Heather Aust
// COSC 4785 Fall 2019
// Program 01
// September 16, 2019

#include <FlexLexer.h>
#include <iostream>

using namespace std;

int main()
{
  yyFlexLexer myScanner;
  int rtn;
  int col = 1;
  int row = 1;
  
  printf("Line\tColumn\tType\tLength\tValue\n");

  while((rtn = myScanner.yylex()) != 0) 
  {
    if(rtn == 11 || rtn == 12 || rtn == 13) // newline, space or tab
    {
      if(rtn == 11) // newline
      {
	printf("%d\t%d\t%d\t%d\n", row, col, rtn, myScanner.YYLeng());
	col = 1;
	row++;
      }
      else if (rtn == 13) //tab
      {
	col += 8 - (col % 8);
      }
      else
      {
	col += myScanner.YYLeng();
      }
    }
    else if( rtn == 14 ) // comment section /*
    {
      col+= myScanner.YYLeng();
      while((rtn = myScanner.yylex()) != 0)
      {
	if(rtn == 11) // newline
	{
	  col = 1;
	  row++;
	}
	else // any other input
	{
	  col += myScanner.YYLeng();
	  if(rtn == 15) // end of comment section
	    {
	      break;
	    }
	}
      }
    }
    else 
    {
      printf("%d\t%d\t%d\t%d\t\%s\n", row, col, rtn, myScanner.YYLeng(), myScanner.YYText());
      col += myScanner.YYLeng();
    }
  }

  return 0;
}
