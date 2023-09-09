all: geraos principal

principal: principal.o data.o
	gcc principal.o data.o -o main

geraos: principal.c data.c
	gcc -c principal.c data.c

clean:
	rm -rf *.o main
