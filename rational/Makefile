# Makefile with multiple targets

# Compiler and compiler flags
CXX = g++
#CXXFLAGS = -Wall -Werror -std=c++11

# Default target
all: runme.cgi publish

runme.cgi: main.o htmlform.o rational.cpp
	$(CXX) main.o htmlform.o rational.cpp -o $@

publish:
	if test -d ~/public_html; then \
	  mkdir -p ~/public_html/rational; \
		cp -f --remove-destination *.cgi ~/public_html/rational; \
	fi

clean:
	rm *.cgi
