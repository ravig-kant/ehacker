IDIR =../include
CC=gcc -v -m32 -g
CFLAGS=-I$(IDIR)

ODIR=../bin
LDIR =../lib

LIBS=-lm

_DEPS = hacking.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = StackExample dtor_samples exploit_notesearch exploit_stackexample fmt_uncommon fmt_uncommon2 fmt_vuln game_of_chance getenvaddr notesearch notetaker print_bytes
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%: %.c $(DEPS)
	$(CC) -o $@ $< $(CFLAGS)

all: $(OBJ)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~
