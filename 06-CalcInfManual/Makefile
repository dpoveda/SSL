# Makes Calc.exe
# Poveda Daniela Andrea
# 1678322
# 2020

BIN = Calc.exe
OBJ = Calc.o 
CC = gcc
CFLAGS = -std=c18 
RM = rm -f

$(BIN): $(OBJ)
 $(CC) $(OBJ) -o $(BIN) $(CFLAGS) 
Calc.o: Calc.c Calc.h
 $(CC) -c Calc.c -o Calc.o $(CFLAGS)

.PHONY: clean 	
clean:
 $(RM) $(OBJ) $(BIN)
