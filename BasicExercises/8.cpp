#include <math.h> 
#include<iostream>

using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL) //Hace Rapido la lectura de datos, para maratones.
//Objetivo 
//8. Hacer un programa que lea un número entero positivo y calcule la suma de los números enteros comprendidos entre 1 y el número leído.
int main(){
	int z, suma=0;
	int contador=0;
	cout<<"Ingrese Numero Entero: "<<endl;
	cin>>z;
	while(contador<=z) {
		suma=contador+suma;		//Acumulador 
		cout<<contador<<" Suma Parcial: "<<suma<<endl;
		contador++;
	}
	cout<<endl;
	cout<<"Suma Total"<<suma<<endl;
	return 0;
}
