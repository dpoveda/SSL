A+B
1+C
1+2
	
Sint
	Exp -> Algo "+" Algo
	Algo -> Numero
	Algo -> Identificador

Lex (ExpReg)
	Adición: "+"
    Multiplicacion: "*"
	Número: DD*
	D: [0-9]
	Identificador: LL*
	L: [A-Za-z]

Parser()
	Exp()
	
Exp()
	Algo();
	Match(Adicion);
    Match(Multiplicacion);
	Algo();

Algo()
	t=GetNextToken();
	if(t==Identificador || t==Numero)
		return;
	ERROR!
	
Match(Esperado)
	t=GetNextToken();
	if(Esperado==t)
		return;
	ERROR!
	
Exp() //v2
	Algo();
	Operador();
	Algo();
	Match(FIN);

ungetc "el undo de getchar"

while( (t =  GetNextToken()) != fdt )
	"parsear"
 	
Token GetNextToken(void){
	static unsigned lastToken=0;
	return tokenList[lastToken++];
}