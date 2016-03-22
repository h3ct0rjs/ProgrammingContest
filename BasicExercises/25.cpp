#include <math.h> 
#include <iostream>
#include <stdio.h>

using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)							//Hace Rapido la lectura de datos, para maratones.
//Objetivo 
//25. Hacer un programa que lea un número entero y determine si es abundante o defectivo. 
//(un número es abundante si la suma de sus divisores propios es mayor que el número; 
//un número es defectivo si la suma de sus divisores propios es menor que el número).

int main(){
	int z;
	int acu=0;
	printf("Ingrese un Numero Entero\t");
	cin>>z;
	for (int i = 1; i <z; ++i)					///Calcula Divisores y SUMA
	{
		if( (z%i)==0)
		{
			acu=acu+i;
			}
	}
	if(acu>z)
		printf("\n[!!]ABUNDANTE");
	else if(acu<z)
		printf("\n[**]DEFECTIVO");
	else{printf("ERROR\n");}			
	printf("\n");

	return 0;
}