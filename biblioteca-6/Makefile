all: geraos principal

principal: principal.o temperature_conversor.o
	gcc principal.o temperature_conversor.o -o main

geraos: principal.c temperature_conversor.c
	gcc -c principal.c temperature_conversor.c

clean:
	rm -rf *.o main
