# Makefile with multiple targets

# Compiler and compiler flags
CXX = g++
#CXXFLAGS = -Wall -Werror -std=c++11

# Default target
all: runme.cgi publish

runme.cgi: main.cpp SVGrectangle.cpp
	$(CXX) *.cpp -o $@

publish:
	if test -d ~/public_html; then \
	  mkdir -p ~/public_html/SVGrectangle; \
		cp -f --remove-destination *.html *.cgi ~/public_html/SVGrectangle; \
	fi

clean:
	rm *.cgi