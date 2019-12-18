# Makefile
# Heather Aust
# October 22, 2019
# Program 03
CXX=g++
CXXFLAGS=-ggdb -Wall -std=c++11 -Wno-sign-compare
YACC=bison
YFLAGS=--report=state -W -d
LEX=flex
LEXXX=flex++
LFLAGS=--warn

.PHONY: clean tarball

program3: program3.tab.cpp program3.tab.hpp program3_lex.cpp program3.cpp node.hpp
	flex++ --warn program3.lpp
	${CXX} ${CXXFLAGS} program3.cpp program3.tab.cpp program3_lex.cpp -o program3
	
program3.tab.cpp : program3.ypp node.hpp
	$(YACC) $(YFLAGS) program3.ypp

program3_lex.cpp: program3.lpp node.hpp
	$(LEXXX) $(LFLAGS) program3.lpp

tidy:
	/bin/rm -f a.out core.* program3.tab.* program3.output \
	  program3_lex.cpp

clean:
	/bin/rm -f program3 program3_lex.cpp

tarball:
	tar cf program3.tar Makefile node.hpp program3.lpp program3.ypp\
	  program3.cpp errVal.hpp program3.pdf