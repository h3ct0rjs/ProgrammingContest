#include <math.h> 
#include<iostream>

using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL) //Hace Rapido la lectura de datos, para maratones.
//Objetivo 
//9. Hacer un programa que lea un número entero positivo y calcule el producto de los números enteros comprendidos entre 1 y el número leído 
//(factorial).

int main(){
	int z,i=0 ;
	float factorial=1, factorial2=1;
	cout<<"Ingrese Numero Entero: "<<endl;
	cin>>z;
	cout<<"Calculando Factorial de "<<z<<"!"<<endl;
	for (i=z; i<= z ; --i)		//Version 1 Decrementando.
	{
		factorial=factorial*i;
		cout<<"Parcial: "<<factorial<<endl;
		if(i==1)
			break;				//Rompe el ciclo pues es posible que i llegue a 0, por lo que todo se dañaria si no salimos
	}
	cout<<"Factorial Decrementando: "<<factorial<<endl;

	//Jack All Trades!
	for (int j = 1; j<= z; ++j)
	{
		factorial2=factorial2*j;
		cout<<"Parcial: "<<factorial2<<endl;
	}

	cout<<"Factorial Incrementado: "<<factorial2<<endl;
	//What Do you need to do Here 
	return 0;
}