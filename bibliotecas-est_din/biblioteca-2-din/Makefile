all: geraos principal compilation clean

principal: matrix_utils.o
	gcc -shared -o libmatrix_utils.so matrix_utils.o

geraos: matrix_utils.c
	gcc -c -fPIC matrix_utils.c

compilation:
	gcc principal.c -o executavel -L. -lmatrix_utils

clean:
	rm -rf *.o principal
