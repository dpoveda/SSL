/*Ej10
Poveda Daniela Andrea
1678322
29/03/20*/

#include <iostream>
using namespace std;

void cargaMasiva(int[], int&, int);
float promedio (int[], int);

int main(){
	int n; 
	int len = 0; 
	
	do{
		cout<<"Ingrese un valor >=1"<<endl;
		cin>>n; //cantidad de posiciones del vector definida por el usuario
	}while(n<1);
	
	int a[n];
	
	cargaMasiva (a, len, n);
	cout<<"Prom: "<<promedio(a, len)<<endl;

	return 0;
}

void cargaMasiva(int v[], int &L, int cp){
	for(int i=0; i<cp; i++){
		cout<<"Ingrese un valor"<<endl;
		cin>>v[i];
		L++;
	}
	
}

float promedio (int v[], int L){
	float sum = 0;
	
	for(int i=0; i<L; i++){
		sum = sum + v[i];
	}
	
	return sum/L;	
}


