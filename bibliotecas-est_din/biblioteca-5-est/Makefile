all: geraos principal compilation clean

principal: string_utils.o
	ar rcs libstring_utils.a string_utils.o

geraos: string_utils.c
	gcc -c string_utils.c

compilation: principal.c
	gcc principal.c -o executavel -L. -lstring_utils
	
clean:
	rm -rf *.o principal
