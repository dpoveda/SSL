# Calculadora Infija: Construcción Manual

El proceso de compilación está formado por dos partes:
1. el ANÁLISIS que, a partir del programa fuente, crea una representación intermedia
del mismo; y
2. la SÍNTESIS que, a partir de esta representación intermedia, construye el
programa objeto.

En este trabajo, se va a abordar la primera parte del proceso de compilacion: **El Analisis.**

El análisis está formado por tres fases:
- el Análisis Léxico,
- el Análisis Sintáctico, y
- el Análisis Semántico (el cual se estudiara mas adelante).


**ANÁLISIS LÉXICO**: detecta los elementos básicos de un programa fuente, que conforman los LR (lenguajes regulares) de los LP (lenguajes de programación). Estas palabras son los LEXEMAS y los LRs a los que pertenecen son CATEGORÍAS LÉXICAS o TOKENS.  
La entrada para el Análisis Léxico son caracteres y la salida son tokens.  
*Analizador léxico --> Scanner*  
**ANÁLISIS SINTÁCTICO**: La entrada son los tokens. Como conoce la sintaxis del LP puede determinar si las construcciones son sintácticamente
correctas. Pero no tiene capacidad de determinar si el programa, en su totalidad, es sintácticamente correcto (multiples declaraciones, incompatibilidad de tipos, ...).  
*Analizador sintáctico --> Parser*  
El Parser recibe tokens del Scanner y los agrupa en unidades, según las producciones de la GIC (gramaticas independientes del contexto) y verifica la corrección de la sintaxis. Si son correctas llama a las rutinas semánticas que realizarán el Análisis Semántico.  
  
Para la construccion de la calculadora infija, primero se va a especificar el lenguaje en un nivel lexico y sintactico para, posteriormente, implementar manualmente ambos niveles.  

El analisis de expresiones aritméticas infijas simples debe incluir:
- Números naturales con representación literal en base 10.
- Identificadores de variables.
- Adición.
- Multiplicación.

Hay dos tipos de sentencias:  
- Asignación  
ID := Expresión;  
Donde la expresión es infija y se construye con identificadores, constantes (numeros naturales) y los operadores + (suma) y _*_ (multiplicación); los paréntesis están
permitidos.  
- Entrada/Salida  
*leer* (lista de IDs);  
*escribir* (lista de Expresiones);  
Cada sentencia termina con un "punto y coma" (;). El cuerpo de un programa está delimitado por *inicio* y *fin*.  
*Palabras reservadas = inicio, fin, leer y escribir.*

## Gramática Léxica
````
<token> -> uno de <identificador> <constante> <palabraReservada>  
<operador> <asignación> <carácterPuntuación>  
<identificador> -> <letra> {<letra o dígito>}  
<constante> -> <dígito> {<dígito>}  
<letra o dígito> -> uno de <letra> <dígito>  
<letra> -> una de a-z A-Z
<dígito> -> uno de 0-9
<palabraReservada> -> una de inicio fin leer escribir
<operador> -> uno de + * 
<asignación> -> :=  
<carácterPuntuación> -> uno de ( ) , ;  
 ```` 

## Gramática Sintáctica
````
<programa> -> inicio <listaSentencias> fin  
<listaSentencias> -> <sentencia> {<sentencia>}  
<sentencia> -> <identificador> := <expresión> ; | leer ( <listaIdentificadores> ) ; | escribir ( <listaExpresiones> ) ;  
<listaIdentificadores> -> <identificador> {, <identificador>}  
<listaExpresiones> -> <expresión> {, <expresión>}  
<expresión> -> <primaria> {<operador> <primaria>}  
<primaria> -> <identificador> | <constante> | ( <expresión> )  
<operador> -> uno de + *
````
