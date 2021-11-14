

all: 

	flex scanner.lex
	bison -d parser.ypp
	g++ -Wall -pedantic -std=c++17 -o hw3 *.c *.cpp 
clean: 
	rm -f lex.yy.c
	rm -f parser.tab.*pp
	rm -f hw3 
.PHONY: all clean