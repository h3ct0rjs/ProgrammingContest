#include <math.h> 
#include<iostream>
#include <stdio.h>

using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL) //Hace Rapido la lectura de datos, para maratones.

//Objetivo 
//20. Hacer un programa que lea un número entero de 3 dígitos y muestre los enteros comprendidos entre 1 y cada uno de los dígitos.

int main(){
	int numero,u,c,d, aux;
	printf("Ingresa un Numero de Tres Digito\n");
	cin>>numero;
	u=numero%10;			//Obtiene el resto del numero para obtener unidades, decenas y centenas
	printf("U:%d\n",u);
	aux=numero-u;	//820
	aux=aux%100;	//resto 20
	d=aux/10;		//20/10=2
	printf("D:%d\n",d);
	aux=numero - ((d*10)-u);
	c=aux/100;
	printf("C:%d\n",c);
	printf("\nNUMERO ORIGINAL ES:%d\n",numero);
	printf("Numeros Comprendidos entre 1 y Digito de Unidades\n");	
	for (int i = 1; i <=u; ++i)
	{
		if(i>1 && i<u)
			printf("\t%d,",i);
		
	}
	printf("\nNumeros Comprendidos entre 1 y Digito de Decenas\n");
	for (int i = 1; i <=d; ++i)
	{
		if(i>1 && i<d)
			printf("\t%d,",i);
		
	}
	printf("\nNumeros Comprendidos entre 1 y Digito de Centenas\n");
	for (int i = 1; i <=c; ++i)
	{
		if(i>1 && i<c)
			printf("\t%d,",i);
		
	}
	return 0;
}