# Makefile
# Heather Aust
# September 16, 2019
# Program 01
CXXFLAGS=-ggdb -Wall -std=c++11

program1: program1.cpp program1.lpp

	flex++ --warn program1.lpp
	g++ ${CXXFLAGS} program1.cpp program1_lex.cpp -o program1
