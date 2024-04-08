# Makefile with multiple targets

# Compiler and compiler flags
CXX = g++
#CXXFLAGS = -Wall -Werror -std=c++11

# Default target
all: runme.cgi

runme.cgi: movingletteroid.cpp jumpingletteroid.cpp main.cpp
	$(CXX) *.cpp *.o -lncurses -o $@

clean:
	rm *.cgi
