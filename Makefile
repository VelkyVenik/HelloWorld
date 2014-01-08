CC=gcc
CFLAGS=-Wall 
LDFLAGS=

LIBS=hello.o
ALL=main


all: ctags $(ALL) 

main: $(LIBS) main.o

ctags:
		ctags *.c *.h

clean:
		rm -f *.o $(ALL) tags

