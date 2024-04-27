# Makefile with multiple targets

# Compiler and compiler flags
CXX = g++
#CXXFLAGS = -Wall -Werror -std=c++11
CXXFLAGS = -std=c++11

# Default target
all: runme.cgi publish

runme.cgi: main.cpp 
	$(CXX) $(CXXFLAGS) *.cpp -o $@

publish:
	if test -d ~/public_html; then \
	  mkdir -p ~/public_html/queue; \
		cp -f --remove-destination *.cgi ~/public_html/queue; \
		cp -f --remove-destination *.html ~/public_html/queue; \
	fi

clean:
	rm *.cgi
