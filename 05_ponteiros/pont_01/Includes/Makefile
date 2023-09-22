all: geraos principal compilation clean

principal: utils.o
	ar rcs libpont1.a utils.o

geraos: utils.c
	gcc -c utils.c

compilation: ponteiro-1.c
	gcc ponteiro-1.c -o ponteiro-1 -L. -lpont1
	
clean:
	rm -rf *.o principal
