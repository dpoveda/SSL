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

**Compilar el resultado y generar hello3.s, no ensamblar:** No se realizo la compilacion pues se marcaron dos errores, una declaracion implicita de la funcion 'prontf' dando ademas la sugerencia de cambiarla por 'printf', y el otro error marcado fue una declaracion al final de la entrada debido a la ausencia de la llave de cierre.

    hello3.c: In function 'main':  
    hello3.c:11:1: warning: implicit declaration of function 'prontf'; did you mean 'printf'? [-Wimplicit-function-declaration]  
    prontf("La respuesta es %d\n");  
    ^~~~~~  
    printf  
    hello3.c:11:1: error: expected declaration or statement at end of input  
      
## hello4.c  
    int printf(const char *s, ...);  
    int main(void){  
    int i=42;  
    prontf("La respuesta es %d\n");
    }  
  
### Resultado u error obtenidos  
**Generar hello4.s, no ensamblar y investigarlo:** Para generar hello4.s se agrego la llave final faltante de hello3.c. Al hechar un vistazo rápido se puede ver que se obtuvieron intrucciones en codigo assembler.  
**Ensamblar hello4.s en hello4.o, no vincular:** Se convirtió el código de ensamblaje en código de nivel de máquina (binario).  
**Vincular hello4.o con la biblioteca estándar y generar el ejecutable:** No puede generar el ejecutable pues en esta etapa se realizan todos los enlaces de llamadas a funciones con sus definiciones (Linker sabe dónde se implementan todas estas funciones) por lo tanto, sigue sin reconocer a la función 'prontf'.
 
    hello4.o:hello4.c:(.text+0x1c): referencia a `prontf' sin definir  
    collect2.exe: error: ld returned 1 exit status
  
## hello5.c 
    int printf(const char *s, ...);  
    int main(void){  
    int i=42;  
    printf("La respuesta es %d\n");  
    }  
  
### Resultado u error obtenidos  
**Corregir en hello5.c, generar el ejecutable y analizarlo:** Se corrigió la funcion 'prontf' a 'printf' y de esta manera se pudo generar un ejecutable. Se espera que muestre por pantalla "La respuesta es 42" pero sin embargo, se muestra un numero diferente pues no de indico en 'printf' el segundo argumento que se pedia: i. 

    La respuesta es 10490752  
    
## hello6.c 
    int printf(const char *s, ...);  
    int main(void){  
    int i=42;  
    printf("La respuesta es %d\n", i);  
    }  
  
### Resultado u error obtenidos  
**Corregir en hello6.c y empezar de nuevo:** Este problema ya no tiene fallas pues nos devuelve por pantalla el número 42 que era lo que estabamos buscando.  

    La respuesta es 42  
  
## hello7.c  
    int main(void){
    int i=42;
    printf("La respuesta es %d\n", i);
    }  
    
### Resultado u error obtenidos  
**Explicar porqué funciona:** Funciona porque lo único que cambio con el archivo hello6.c, es la ausencia del prototipo de la función 'printf' el cual era redundante en el funcionamiento del programa. Se pudo hacer el proceso de compilación sin problemas logrando llegar al binario ejecutable.  
 

