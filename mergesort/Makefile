# Makefile with multiple targets

# Compiler and compiler flags
CXX = g++
#CXXFLAGS = -Wall -Werror -std=c++11

# Default target
all: runme.cgi publish

runme.cgi: linkedlist.cpp linkedlist.h main.cpp node.h node.cpp
	$(CXX) *.cpp -o $@

publish:
	if test -d ~/public_html; then \
	  mkdir -p ~/public_html/mergesort; \
		cp -f --remove-destination *.html *.cgi ~/public_html/mergesort; \
	fi

clean:
	rm *.cgi
