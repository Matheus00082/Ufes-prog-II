CC = gcc
CFLAGS = -Wall -Werror -std=c99 -Iinclude -fPIC
SRCDIR = src
OBJDIR = obj
BINDIR = bin
LIBDIR = lib
LIBRARY = libnba.so
SOURCES = $(wildcard $(SRCDIR)/*.c)
OBJECTS = $(patsubst $(SRCDIR)/%.c,$(OBJDIR)/%.o,$(SOURCES))
EXECUTABLE = executavel
all: $(BINDIR)/$(EXECUTABLE) $(LIBDIR)/$(LIBRARY)
$(BINDIR)/$(EXECUTABLE): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(BINDIR)/$(EXECUTABLE) $^
$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -c -o $@ $<
$(LIBDIR)/$(LIBRARY): $(OBJECTS)
	$(CC) $(CFLAGS) -shared -o $(LIBDIR)/$(LIBRARY) $^
clean:
	rm -f $(OBJDIR)/*.o $(BINDIR)/$(EXECUTABLE) $(LIBDIR)/$(LIBRARY)
build: all
.PHONY: all clean build
