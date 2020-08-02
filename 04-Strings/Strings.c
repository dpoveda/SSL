/*File: Strings.c  
Strings
Poveda Daniela Andrea
1678322
2020
*/

#include <stdio.h>
#include <string.h> //incluyo esta directiva para poder utilizar la funcion strcat en Power
#include "String.h"

bool IsEmpty();
size_t GetLength();
char * Power();
bool Equal();


int main(){
    const char *string, *stringDos;
    size_t n;

    IsEmpty(string);
    GetLength(string);
    Power(string, n);
    Equal(string, stringDos);
}


bool IsEmpty(const char *string){
    if (string == '/0'){ 
        return true;
    }
    return false;
}

size_t GetLength(const char *string){ //ver
    int h,t;
    if (string == '/0'){
        return 0;
    }
    else if(string = h*t)
    {
        return 1 + GetLength(t);
    }
}

char *Power(char *string, size_t n){
    char *result;
    if((string == '/0') || (n = 0)){
        return 0;
    }
    else if(n > 0)
    {           
        return strcat(string,Power(string,n-1));
    }
}


bool Equal(const char *string, const char *stringDos){ //ver 
    if (string == stringDos){
        return true;
    }
    return false;
}