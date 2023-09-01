all: geraos principal

principal: matrizes.o matrix_utils.o
	gcc matrizes.o matrix_utils.o -o principal

geraos: matrizes.c matrix_utils.c
	gcc -c matrizes.c matrix_utils.c

clean:
	rm -rf *.o principal
