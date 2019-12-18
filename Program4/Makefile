# Makefile
# Heather Aust
# October 22, 2019
# Program 04
CXX=g++
CXXFLAGS=-ggdb -Wall -std=c++11 -Wno-sign-compare
YACC=bison
YFLAGS=--report=state -W -d
LEX=flex
LEXXX=flex++
LFLAGS=--warn

.PHONY: clean tarball

program4: program4.tab.cpp program4.tab.hpp program4_lex.cpp program4.cpp node.hpp
	flex++ --warn program4.lpp
	${CXX} ${CXXFLAGS} program4.cpp program4.tab.cpp program4_lex.cpp -o program4
	
program4.tab.cpp : program4.ypp node.hpp
	$(YACC) $(YFLAGS) program4.ypp

program4_lex.cpp: program4.lpp node.hpp
	$(LEXXX) $(LFLAGS) program4.lpp

clean:
	/bin/rm -f program4 program4_lex.cpp a.out core.* program4.tab.* \
	  program4.output program4_lex.cpp

tarball:
	tar cf program4.tar Makefile node.hpp program4.lpp program4.ypp\
	  program4.cpp errVal.hpp program4.pdf