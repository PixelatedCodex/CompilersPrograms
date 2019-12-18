# Makefile
# Heather Aust
# December 8, 2019
# Program 06
CXX=g++
CXXFLAGS=-ggdb -Wall -std=c++11 -Wno-sign-compare
YACC=bison
YFLAGS=--report=state -W -d
LEX=flex
LEXXX=flex++
LFLAGS=--warn

.PHONY: clean tarball

program6: program6.tab.cpp program6.tab.hpp program6_lex.cpp program6.cpp \
	  node.hpp errVal.hpp SymbolTable.hpp Symbol.hpp TypeTable.hpp ExprTree.hpp
	flex++ --warn program6.lpp
	${CXX} ${CXXFLAGS} program6.cpp program6.tab.cpp program6_lex.cpp -o program6
	
program6.tab.cpp : program6.ypp node.hpp
	$(YACC) $(YFLAGS) program6.ypp

program6_lex.cpp: program6.lpp node.hpp
	$(LEXXX) $(LFLAGS) program6.lpp

clean:
	/bin/rm -f program6 program6_lex.cpp a.out core.* program6.tab.* \
	  program6.output program6_lex.cpp

tarball:
	tar cf program6.tar Makefile node.hpp program6.lpp program6.ypp\
	  program6.cpp errVal.hpp SymbolTable.hpp Symbol.hpp\
	  TypeTable.hpp ExprTree.hpp