# Diferencias entre hello.cpp y hello.c 
  
|| Léxico | Sintaxis | Semántica |
|--|--|--|--|  
|**hello.cpp**|*int* - palabraReservada; *main* - identificador; *{* - carácterPuntuación; *<<* - operador; *"Hello, World!"* - literalCadena; *;* - carácterPuntuación| main: encabezamiento - cuerpo; *encabezamiento:* int main () ;*cuerpo:* {declaración sentencias} |Se quiere imprimir por pantalla el mensaje "Hello, World!" mediante la sentencia *cout* incluida en la biblioteca *iostream*. Codigo comprensible, simple y funcional|  
|**hello.c**|*int* - palabraReservada; *main* - identificador; *void* - palabra reservada; *{* - carácterPuntuación; *printf* -identificador; *(* - operador; *"Hello, World!"* - literalCadena; *;* - carácterPuntuación; *(* - operador; *,* - carácterPuntuación| main: encabezamiento - cuerpo; *encabezamiento:* int main (void) ;*cuerpo:* {declaración sentencias} |Se quiere imprimir por pantalla el mensaje "Hello, World!" mediante la sentencia *printf* incluida en la biblioteca *stdio.h*. Codigo comprensible, simple y funcional|
