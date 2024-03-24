# Makefile with multiple targets

# Compiler and compiler flags
CXX = g++
#CXXFLAGS = -Wall -Werror -std=c++11

# Default target
all: runme.cgi publish

runme.cgi: main.cpp 
	$(CXX) *.cpp -o $@

publish:
	if test -d ~/public_html; then \
	  mkdir -p ~/public_html/parantheses; \
		cp -f --remove-destination *.html *.cgi ~/public_html/parantheses; \
	fi

clean:
	rm *.cgi
