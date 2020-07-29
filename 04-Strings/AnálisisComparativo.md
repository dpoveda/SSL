# Análisis Comparativo del tipo String en Lenguajes de Programación  
En esta primer parte del trabajo voy a realizar un análisis comparativo del tipo de dato String en el lenguaje C y en Java.  
  
## Dato String en C
En primer instancia, debo mencionar que no existe un tipo de dato específico (String) para almacenar texto en C como en los demás lenguajes, sino que se utiliza un arreglo de caracteres = [char]. Funciona de igual forma que los demás arrays con la diferencia de que ahora se van a manejar letras en vez de números.  
Para declarar una cadena, string o un vector de caracteres, se hace como en el caso de un array.  
Ejemplo:   
~~~
char texto [20];
~~~  
Para saber cómo funciona una cadena por dentro, vamos a ver cómo se inicializa:  
~~~
#include <stdio.h>

main()
{
	char nombre[] = "Gandalf";

	printf( "Texto: %s\n", nombre );
	printf( "Tamaño de la cadena: %i bytes\n", sizeof nombre );
}
~~~  
Resultado al ejecutar:  
~~~
Texto: Gandalf
Tamaño de la cadena: 8 bytes
~~~  
Curiosamente la respuesta nos dice que "Gandalf" ocupa 8 bytes. Como cada elemento char ocupa un byte eso quiere decir que la cadena tiene 8 elementos, a pesar de que "Gandalf" sólo cuenta con 7 letras. La razón es que la cadena tiene como carácter final el símbolo '\0', cuyo significado es _"fin de cadena"_. De esta forma, cuando queremos escribir la cadena basta con usar %s y el compilador sabe cuántos elementos debe escribir: hasta que encuentre '\0'.  
El programa anterior sería equivalente a:  
~~~
#include <stdio.h>

main()
{
	char nombre[] = { 'G', 'a', 'n', 'd', 'a', 'l', 'f', '\0' };

	printf( "Texto: %s\n", nombre );
	printf( "Tamaño de la cadena: %i bytes\n", sizeof nombre );
}
~~~  
Es importante no olvidar que la longitud de una cadena es la longitud del texto más el símbolo de fin de cadena. Por eso cuando definamos una cadena tenemos que reservarle un espacio adicional. Por ejemplo:  
~~~
	char nombre[8] = "Gandalf";
~~~  
Además de lo ya mencionado, C admite una amplia gama de funciones que manipulan cadenas terminadas en nulo, para utilizarlas en nuestro programa de debe añadir la directiva:  
~~~
 #include <string.h>
~~~
Las funciones son:  
__strcpy (s1, s2);__ //Copia la cadena s2 en la cadena s1.  
__strcat (s1, s2);__ //Concatena la cadena s2 en el extremo de la cadena s1.  
__strlen (s1);__ //Devuelve la longitud de la cadena s1.  
__strcmp (s1, s2);__ //Devuelve 0 si s1 y s2 son iguales; menor que 0 si s1 <s2; mayor que 0 si s1> s2.  
__strchr (s1, ch);__ //Devuelve un puntero a la primera aparición del carácter ch en la cadena s1.  
__strstr (s1, s2);__ //Devuelve un puntero a la primera aparición de la cadena s2 en la cadena s1.  
  
  

## Dato String en Java
Un String en Java representa una cadena de caracteres no modificable (no se pueden cambiar, sólo pueden ser reemplazados).  
En algunos otros lenguajes de programación (como el mencionado anteriormente) una cadena o string es una matriz o array de caracteres. Este no es el caso con Java.  
Todos los literales de la forma "cualquier texto", es decir, literales entre comillas dobles, que aparecen en un programa java se implementan como objetos de la clase String. En Java, los String son objetos.  
Cuando en Java se escribe "hola", estamos haciendo referencia a un objeto de la clase String que representa ese texto. Por eso es válido escribir "hola".length() el cual daría 4.  
Se puede crear un String de varias formas, entre ellas:  
* Utilizando una cadena de caracteres entre comillas:  
~~~
String s1 = "abcdef";
~~~  
* Utilizando operador de concatenación + con dos o más objetos String:  
~~~
String s2 = s1 + "ghij";      //s2 contiene "abcdefghij"
String s3 = s1 + s2 + "klm";  //s3 contiene " abcdefabcdefghijklm"   
~~~  
* Al igual que con cualquier otro objeto, se puede crear objetos String utilizando la palabra clave _new_ y un constructor. La clase string tiene trece constructores que le permiten proporcionar el valor inicial de la cadena utilizando diferentes fuentes, como una matriz de caracteres:  
~~~
char [] helloArray = {'h', 'e', 'l', 'l', 'o', '.' };
Cadena helloString = nueva Cadena (helloArray);
System.out.println (helloString);
//En la ultima línea de este fragmento de código aparece hello.  
~~~  
Como mencione, la clase String proporciona varios constructores, entre ellos:  
__String()__ //Constructor por defecto. El nuevo String toma el valor "".  
~~~
String s = new String();   //crea el string s vacío.
//Equivale a:   String s = ""; 
~~~  
 
__String(String s)__ //Crea un nuevo String, copiando el que recibe como parámetro.  
~~~
String s = "hola";
String s1 = new String(s);  
//crea el String s1 y le copia el contenido de s
~~~  
__String( char[] v )__ //Crea un String y le asigna como valor los caracteres contenidos en el array recibido como parámetro.  
~~~
char [] a = {'a', 'b', 'c', 'd', 'e'};
String s = new String(a);  
//crea String s con valor "abcde"
~~~  
__String( char[] v , int pos, int n)__ //Crea un String y le asigna como valor los n caracteres contenidos en el array recibido como parámetro, a partir de la posición pos.  
~~~
char [] a = {'a', 'b', 'c', 'd', 'e'};
String s = new String(a, 1, 3);
//crea String s con valor "bcd";
~~~  
La clase String tambien proporciona métodos para el tratamiento de las cadenas de caracteres: longitud de una cadena (_length()_), buscar y extraer una subcadena (_substring(n1,n2)_), convertir cadenas a mayúsculas(_toUpperCase()_) o minúsculas (_toLowerCase()_), etc.  

Debemos recordar que los objetos String no son modificables, por lo tanto, los métodos que actúan sobre un String con la intención de modificarlo lo que hacen es crear un nuevo String a partir del original y devolverlo modificado.  
Por ejemplo una operación como convertir a mayúsculas o minúsculas un String no lo modificará sino que creará y devolverá un nuevo String con el resultado de la operación.  
~~~
String s = "abc";        
s = s.toUpperCase(); //convertir a mayúsculas el contenido del String s      
~~~  
El recolector de basura (_garbage collector_) es el encargado de eliminar de forma automática los objetos a los que ya no hace referencia ninguna variable.    


  
## Bibliografía  
http://platea.pntic.mec.es/vgonzale/cyr_0204/cyr_01/control/lengua_C/cadenas.htm  
https://www.tutorialspoint.com/cprogramming/c_strings.htm  
https://docs.oracle.com/javase/tutorial/java/data/strings.html  
http://puntocomnoesunlenguaje.blogspot.com/2013/02/clase-string.html  
http://www.reloco.com.ar/prog/java/c++.html  

