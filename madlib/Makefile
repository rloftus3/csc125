# Makefile with multiple targets

# Compiler and compiler flags
CXX = g++
#CXXFLAGS = -Wall -Werror -std=c++11

# Output files
OUT_MAIN = runme.cgi
OUT_UTILS = libutils.a

# Default target
all: runme.cgi publish

runme.cgi: main.cpp htmlform.cpp
	$(CXX) *.cpp -o $@

publish:
	echo "Hi from Publish"

clean:
	rm *.cgi