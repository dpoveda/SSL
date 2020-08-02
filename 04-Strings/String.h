/*File: String.h 
String
Poveda Daniela Andrea
1678322
2020
*/

#include <stdbool.h> //incluyo esta directiva para poder usar el tipo bool
#ifndef STRING_H_INCLUDED
#define STRING_H_INCLUDED

//escribir precondicion y poscondicion de cada funcion
bool IsEmpty(const char *); //poner * es igual que poner []
//escribir precondicion y poscondicion de cada funcion
size_t GetLength(const char *);
//escribir precondicion y poscondicion de cada funcion
char * Power(char *,size_t); //no se pone const porque se va a modificar
//escribir precondicion y poscondicion de cada funcion
bool Equal(const char *,const char *);

#endif
