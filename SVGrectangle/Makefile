# Makefile with multiple targets

# Compiler and compiler flags
CXX = g++
#CXXFLAGS = -Wall -Werror -std=c++11

# Default target
all: runme.cgi publish

runme.cgi: main.cpp SVGrectangle.cpp
	$(CXX) *.cpp -o $@

publish:
	echo "Hi from Publish"

clean:
	rm *.cgi