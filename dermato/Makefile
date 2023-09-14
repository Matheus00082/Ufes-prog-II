CC = gcc
CFLAGS = -Wall -Wextra -fPIC
LDFLAGS = -shared

all: principal

principal: libdermato.so

libdermato.so: data.o lesao.o paciente.o
	$(CC) $(LDFLAGS) -o $@ $^
	
geraos: data.c lesao.c paciente.c
	$(CC) $(CFLAGS) -c $^

compilation: main.c libdermato.so
	$(CC) $< -o executavel -L. -ldermato

clean:
	rm -rf *.o libdermato.so executavel
