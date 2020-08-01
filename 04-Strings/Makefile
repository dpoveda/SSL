# Makes StringsTest.exe
# Poveda Daniela Andrea
# 1678322
# 2020

BIN = StringsTest.exe
OBJ = StringsTest.o Strings.o
CC = gcc
CFLAGS = -std=c18 
RM = rm -f

$(BIN): $(OBJ)
 $(CC) $(OBJ) -o $(BIN) $(CFLAGS) 
StringsTest.o: StringsTest.c String.h
 $(CC) -c StringsTest.c -o StringsTest.o $(CFLAGS)
Strings.o: String.h Strings.c
 $(CC) -c Strings.c -o Strings.o $(CFLAGS)

.PHONY: clean 	
clean:
 $(RM) $(OBJ) $(BIN)
