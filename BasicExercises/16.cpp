#include <math.h> 
#include <stdio.h> 		//printf, scanf...and others of standard input 
#include<iostream>

using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL) //Hace Rapido la lectura de datos, para maratones.
//Objetivo 
//16. Hacer un programa que lea dos números enteros y muestre los números terminados en 5 comprendidos entre el número menor y el número mayor.

int main(){
	int n1,n2;
	printf("Numeros terminados en 5 comprendidos entre dos numeros\n");
	printf("Ingrese dos Numeros Enteros: ");
	cin>>n1>>n2;
	for(n1;n1<=n2;++n1){		
		if((n1%5)==0)
			printf("%d\n",n1);
	}	
	return 0;
}
