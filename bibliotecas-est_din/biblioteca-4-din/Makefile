all: geraos principal compilation clean

principal: data.o
	gcc -shared -o libdata.so data.o

geraos: data.c
	gcc -c -fPIC data.c

compilation:
	gcc principal.c -o executavel -L. -ldata

clean:
	rm -rf *.o principal

