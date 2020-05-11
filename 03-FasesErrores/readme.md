# Fases de la traducción y errores  
  
## hello2.c  
#include <stdio.h>  
int/*medio*/main(void){  
int i=42;  
prontf("La respuesta es %d\n");  
  
### Resultado u error obtenidos
**Generar hello2.i:** Se interpreto la directiva #include <stdio.h> y se eliminaron los comentarios.  
  
## hello3.c  
int printf(const char *s, ...);  
int main(void){  
int i=42;  
prontf("La respuesta es %d\n");  
  
### Resultado u error obtenidos  
**Semantica de la primera linea:** La función de biblioteca C int printf(const char *s, ...); envia salida formateada (s) a stdout, donde s, es la cadena que contiene el texto que se escribirá en stdout. 
  
**Diferencias entre hello3.c y hello3.i:** No encontre diferencias entre ambos archivos pues hello3.c no tiene directivas ni comentarios, por lo tanto el preprocesamiento creo el archivo hello3.i sin ningun cambio.  

