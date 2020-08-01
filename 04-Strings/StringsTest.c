/*File: StringTest.c  
String Test
Poveda Daniela Andrea
1678322
2020  
*/


#include <stdio.h>
#include <assert.h>
#include "String.h"

void GetLengthAssert();
void IsEmptyAssert(); 
void EqualAssert();
void PowerAssert();

int main(){
    GetLengthAssert();
    IsEmptyAssert();
    EqualAssert();    
    PowerAssert();
}

void GetLengthAssert(){
    assert(GetLength("")==0);
    assert(GetLength("ab")==2);
    assert(GetLength("ababa")==5);
    assert(GetLength("ab ab")==5);
}

void IsEmptyAssert(){
    assert(IsEmpty(""));
    assert(!IsEmpty(" "));
    assert(!IsEmpty("ab"));
    assert(!IsEmpty(" ab"));
}

void EqualAssert(){
    assert(Equal("", ""));
    assert(Equal("ab", "ab"));
    assert(!Equal("ab", "ba"));
    assert(!Equal("aab", "aa b"));
}

void PowerAssert(){
    assert(Equal("abababab", Power("ab", 4)));
    assert(Equal("", Power("ab", 0)));
    assert(Equal("ababab", Power("ab", 3)));
    assert(Equal("ab", Power("ab", 1)));
}