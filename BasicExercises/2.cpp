#include <math.h> 
#include<iostream>

using namespace std;

#define fast ios_base::sync_with_stdio(false);cin.tie(NULL) //Hace Rapido la lectura de datos, para maratones.
//objetivo
//2. Hacer un programa que lea un número entero positivo y muestre los enteros comprendidos entre el número leído y el 1.

int main(){
	int z;
	cout << "Ingrese Valor Entero: \n";
	cin>>z;								//Recibe dato entrada entero, esto se puede hacer con scanf("%tipodato",&variable);
	for(z; z>=1;z--)					//Contador al reves
		cout <<"[:] " <<z<<endl ;
	return 0;
}
