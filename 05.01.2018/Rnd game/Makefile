# Makefile for random game
CC=gcc
CCFLAGS=-Wall
CLEAN=rm -f
PROGRAM_NAME=rndgame
OBJECT_FILES=*.o
SOURCE_FILES=number.c

$(PROGRAM_NAME): $(OBJECT_FILES)
	$(CC) $(CCFLAGS) -o $@ $^

$(OBJECT_FILES): $(SOURCE_FILES)
	$(CC) $(CCFLAGS) -c $^

clean: $(CLEAN) *.o $(PROGRAM_NAME)