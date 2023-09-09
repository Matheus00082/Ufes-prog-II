all: geraos principal compilation clean

principal: esfera_utils.o
	ar rcs libesfera_utils.a esfera_utils.o

geraos: esfera_utils.c
	gcc -c esfera_utils.c

compilation: principal.c
	gcc principal.c -o executavel -L. -lesfera_utils
	
clean:
	rm -rf *.o principal
