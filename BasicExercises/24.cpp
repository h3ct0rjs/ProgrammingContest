#include <math.h> 
#include <iostream>
#include <stdio.h>

using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL) //Hace Rapido la lectura de datos, para maratones.
//Objetivo 
//24. Hacer un programa que lea un número entero y determine si es o no perfecto. 
//(un número natural es perfecto si es igual a la suma de sus divisores propios, por ejemplo, 6 es perfecto ya que 1+2+3=6).

int main(){
	int z;
	int acu=0;
	printf("Ingrese un Numero Entero\t");
	cin>>z;
	for (int i = 1; i <z; ++i)			//Calcula Divisores, y Suma.
	{
		if( (z%i)==0)
		{
			acu=acu+i;
			}
	}
	if(acu==z)
		printf("\n[!!]Es un Numero Perfecto");
	else{printf("[*]No es PERFECTO, LO SIENTO :'( \n");}
	printf("\n");

	return 0;
}