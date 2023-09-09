all: geraos principal compilation clean

principal: temperature_conversor.o
	gcc -shared -o libtemperature_conversor.so temperature_conversor.o

geraos: temperature_conversor.c
	gcc -c -fPIC temperature_conversor.c

compilation:
	gcc principal.c -o executavel -L. -ltemperature_conversor

clean:
	rm -rf *.o principal
