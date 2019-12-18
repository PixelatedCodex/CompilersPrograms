# Makefile
# Heather Aust
# November 19, 2019
# Program 05
CXX=g++
CXXFLAGS=-ggdb -Wall -std=c++11 -Wno-sign-compare
YACC=bison
YFLAGS=--report=state -W -d
LEX=flex
LEXXX=flex++
LFLAGS=--warn

.PHONY: clean tarball

program4: program5.tab.cpp program5.tab.hpp program5_lex.cpp program5.cpp \
	  node.hpp errVal.hpp SymbolTable.hpp Symbol.hpp Type.hpp
	flex++ --warn program5.lpp
	${CXX} ${CXXFLAGS} program5.cpp program5.tab.cpp program5_lex.cpp -o program5
	
program5.tab.cpp : program5.ypp node.hpp
	$(YACC) $(YFLAGS) program5.ypp

program5_lex.cpp: program5.lpp node.hpp
	$(LEXXX) $(LFLAGS) program5.lpp

clean:
	/bin/rm -f program5 program5_lex.cpp a.out core.* program5.tab.* \
	  program5.output program5_lex.cpp

tarball:
	tar cf program5.tar Makefile node.hpp program5.lpp program5.ypp\
	  program5.cpp errVal.hpp SymbolTable.hpp Symbol.hpp\
	  Type.hpp