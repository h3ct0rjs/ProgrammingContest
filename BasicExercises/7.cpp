#include <math.h> 
#include<iostream>

using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL) //Hace Rapido la lectura de datos, para maratones.
//Objetivo 
//7. Hacer un programa que lea un número entero y muestre su tabla de multiplicar hasta el 10.
int main(){
	int z;
	cout<<"Ingrese Numero Entero: "<<endl;
	cin>>z;
	cout<<"Tabla de Multiplicar del "<<z<<endl;
	for (int i = 0; i <= 10; ++i)
	{
		cout<<z<<"*"<<i<<"="<<z*i<<endl;
	}
	return 0;
}
