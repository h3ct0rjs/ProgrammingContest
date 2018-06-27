#include <math.h> 
#include <iostream>
#include <stdio.h>

using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL) //Hace Rapido la lectura de datos, para maratones.
//Objetivo 
//23. Hacer un programa que lea un número entero y calcule la suma de sus divisores.

int main(){
	int z;
	int acu=0;
	printf("Ingrese un Numero Entero \n");
	cin>>z;
	printf(":::LISTA DIVISORES:::\n");
	for (int i = 1; i <z; ++i)
	{
		if( (z%i)==0)
		{
			printf("%d\t",i);
			acu=acu+i;
			}
	}
	printf("\nLa suma de los divisores es:%d",acu);
	printf("\n");

	return 0;
}
