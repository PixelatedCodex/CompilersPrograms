# Makefile
# Heather Aust
# September 25, 2019
# Program 02
CXX=g++
CXXFLAGS=-ggdb -Wall -std=c++11

program2: program2.cpp program2.lpp
	flex++ --warn program2.lpp
	${CXX} ${CXXFLAGS} program2.cpp program2_lex.cpp -o program2
clean:
	/bin/rm -f program2 program2_lex.cpp