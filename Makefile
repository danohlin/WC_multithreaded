# Makefile for asg3

CC=gcc
CFLAGS=-c -Wall

objects = Main.o WC.o Readline.o CountsUpdate.o CountWord.o ToString.o


all : Countfolder



Countfolder : $(objects)
	$(CC) $(objects) -lpthread -o Countfolder

Main.o : Main.c Definition.h ExternalVar.h
	$(CC) $(CFLAGS) Main.c

WC.o : WC.c Definition.h ExternalVar.h
	$(CC) $(CFLAGS) WC.c

Readline.o : Readline.c Definition.h ExternalVar.h
	$(CC) $(CFLAGS) Readline.c

CountsUpdate.o : CountsUpdate.c Definition.h ExternalVar.h
	$(CC) $(CFLAGS) CountsUpdate.c

CountWord.o : CountWord.c Definition.h ExternalVar.h
	$(CC) $(CFLAGS) CountWord.c

ToString.o : ToString.c Definition.h ExternalVar.h
	$(CC) $(CFLAGS) ToString.c


clean : Countfolder $(objects)
	rm Countfolder $(objects)
