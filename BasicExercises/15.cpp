#include <math.h> 
#include <stdio.h>
#include<iostream>

using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL) //Hace Rapido la lectura de datos, para maratones.
//Objetivo 
//15. Hacer un programa que lea dos números enteros y calcule la suma de los números pares comprendidos entre el número menor y el número mayor.
int main(){
	int z1,z2;
	cout<<"Ingrese dos Numeros Enteros: ";
	cin>>z1>>z2;
	cout<<"numeros pares comprendidos entre "<<z1<<" y "<<z2<<endl;
	for(z1;z1<=z2;++z1){		
		if((z1%2)==0)
			printf("%d\n",z1);
	}	
	return 0;
}
