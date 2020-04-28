# Diferencias y similitudes entre hello.cpp y hello.c 
  
Obs: Las diferencias estarán escritas en **"negrita"**.
  
**hello.cpp** 

#include<iostream>  
int main (){  
	std::cout<<"Hello, World!";  
}  

**hello.c**  

#include <stdio.h>  
int main (void){  
	printf ("Hello, World!");  
}
  
  
|| Léxico | Sintaxis | Semántica |
|--|--|--|--|  
|**hello.cpp**|*int* - palabraReservada; *main* - identificador; **( - carácterPuntuación**; *{* - carácterPuntuación; **:: - carácterPuntuación**; **<< - operador**; *"Hello, World!"* - literalCadena; *;* - carácterPuntuación| main: encabezamiento - cuerpo; *encabezamiento:* **int main ()** ;*cuerpo:* {declaración sentencias} |Se quiere imprimir por pantalla el mensaje "Hello, World!" mediante la sentencia *cout* incluida en la biblioteca **iostream**. **Queremos que inserte "Hello, World!" en cout**. Codigo comprensible, simple y funcional|  
|**hello.c**|*int* - palabraReservada; *main* - identificador; **void - palabra reservada**; *{* - carácterPuntuación; **printf -identificador**; **( - operador**; *"Hello, World!"* - literalCadena; *;* - carácterPuntuación| main: encabezamiento - cuerpo; *encabezamiento:* **int main (void)** ;*cuerpo:* {declaración sentencias} |Se quiere imprimir por pantalla el mensaje "Hello, World!" mediante la sentencia *printf* incluida en la biblioteca **stdio.h**. **Queremos invocar a printf con "Hello, World!"**. Codigo comprensible, simple y funcional|
