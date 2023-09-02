all: geraos principal

principal: principal.o string_utils.o
	gcc principal.o string_utils.o -o main

geraos: principal.c string_utils.c
	gcc -c principal.c string_utils.c

clean:
	rm -rf *.o main
