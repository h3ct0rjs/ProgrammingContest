#include <math.h> 
#include <stdio.h>
#include<iostream>

using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL) //Hace Rapido la lectura de datos, para maratones.
//Objetivo 
//17. Hacer un programa que muestre los múltiplos de 6 comprendidos entre 500 y 5000.
int main(){
	int contadorcol=0;
	int val=500;
	printf("MULTIPLOS de 6 comprendidos entre 500 y 5000\n");
	while((val>=500)&&(val<=5000)){
		if((val%6)==0){					//Es multiplo de 6 imprimalo.
			printf("%d\t",val);
			if(contadorcol<=3)			//Ordenado en 4 columnas 0 1 2 3 
				contadorcol++;
			else{
				printf("\n");
				contadorcol=0;
			}

			}
			
		val++;
	}
	return 0;
}
