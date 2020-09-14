#define NUMEST 15 #define NUMCOLS 13
#define TAMLEX 32+1 #define TAMNOM 20+1
FILE * in;
typedef enum {
INICIO, FIN, LEER, ESCRIBIR, ID, CONSTANTE, PARENIZQUIERDO,
PARENDERECHO, PUNTOYCOMA, COMA, ASIGNACION, SUMA, RESTA, FDT,
ERRORLEXICO } TOKEN;
TOKEN scanner()
{
int tabla[NUMEST][NUMCOLS] =
 */ 0 1 2 3 4 5 6 7 8 9 10 11 12 */
 */ l d + - ( ) , ; : = EOF SP O*/
0 { { 1, 3, 5, 6, 7, 8, 9, 10, 11, 14, 13, 0, 14 },
1 { 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2 },
2 ID { 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14 },
3 { 4, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4 },
4 CONSTANTE { 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14 },
5 SUMA { 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14 },
6 RESTA { 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14 },
7 PARENIZQUIERDO { 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14 },
8 PARENDERECHO { 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14 },
9 COMA { 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14 },
10 PUNTOYCOMA { 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14 },
11 { 14, 14, 14, 14, 14, 14, 14, 14, 14, 12, 14, 14, 14 },
12 ASIGNACION { 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14 },
13 FDT { 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14 },
14 ERRORLEXICO { 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14 } };
int car; int col; int estado = 0; int i = 0;
do {
 car = fgetc(in);
 col = columna(car);
 estado = tabla[estado][col];
 if ( col != 11 ) {
 buffer[i] = car;
 i++;
 } //fin del if
}
while ( !estadoFinal(estado) && !(estado == 14) );
buffer[i] = '\0'; //pone la marca de fin de cadena
switch ( estado ) //para determinar que debe retornar
{
 case 2 : if ( col != 11 ) {
 ungetc(car, in);
 buffer[i-1] = '\0';
 }
 return ID;
 case 4 : if ( col != 11 ) {
 ungetc(car, in);
 buffer[i-1] = '\0';
 }
 return CONSTANTE;
 case 5 : return SUMA;
 case 6 : return RESTA;
 case 7 : return PARENIZQUIERDO;
 case 8 : return PARENDERECHO;
 case 9 : return COMA;
 case 10 : return PUNTOYCOMA;
 case 12 : return ASIGNACION;
 case 13 : return FDT;
 case 14 : return ERRORLEXICO;
}
return 0;
}
int estadoFinal(int e)
{
if ( e == 0 || e == 1 || e == 3 || e == 11 || e == 14 ) return 0;
return 1;
}
int columna(int c)
{
if ( isalpha(c) ) return 0; if ( isdigit(c) ) return 1; if ( c == '+' ) return 2;
if ( c == '-' ) return 3; if ( c == '(' ) return 4; if ( c == ')' ) return 5;
if ( c == ',' ) return 6; if ( c == ';' ) return 7; if ( c == ':' ) return 8;
if ( c == '=' ) return 9; if ( c == EOF ) return 10; if ( isspace(c) ) return 11;
return 12;
}
