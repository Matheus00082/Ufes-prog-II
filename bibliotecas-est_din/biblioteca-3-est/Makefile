all: geraos principal compilation clean

principal: data.o
	ar rcs libdata.a data.o

geraos: data.c
	gcc -c data.c

compilation: principal.c
	gcc principal.c -o executavel -L. -ldata
	
clean:
	rm -rf *.o principal
