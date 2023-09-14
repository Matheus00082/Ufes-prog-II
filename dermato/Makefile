all: geraos principal compilation clean

principal: data.o lesao.o paciente.o
	gcc -shared -o libdermato.so data.o lesao.o paciente.o
	
geraos: data.c lesao.c paciente.c
	gcc -c -fPIC data.c lesao.c paciente.c

compilation:
	gcc main.c -o executavel -L. -ldermato

clean:
	rm -rf *.o
