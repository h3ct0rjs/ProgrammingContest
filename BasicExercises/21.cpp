#include <math.h> 
#include <iostream>
#include <stdio.h>

using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL) //Hace Rapido la lectura de datos, para maratones.
//Objetivo 
//21. Hacer un programa que lea un número entero positivo y muestre todos sus divisores.
int main(){
	int z;
	printf("Ingrese un Numero Entero Positivo\n");
	cin>>z;									
	printf(":::LISTA DIVISORES:::\n");
	for (int i = 1; i <=z; ++i)
	{
		if( (z%i)==0)
			printf("%d\t",i);
	}
	printf("\n");

	return 0;
}
