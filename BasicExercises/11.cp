#include <math.h> 
#include<iostream>

using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL) //Hace Rapido la lectura de datos, para maratones.
//Objetivo 
//11. Hacer un programa que lea un número entero positivo y calcule el promedio de los números enteros comprendidos 
//entre 1 y el número leído.

int main(){
	int z; float promedio;
	int suma=0;
	cout<<"Ingrese un numero Entero Positivo"<<endl;
	cin>>z;
//	if(!z>0)								//Asegura que deba ser entero, quizas los usuario sean malos xD
//        return EXIT_FAILURE;
	for (int i = 1; i <= z; ++i)
	{
		suma=suma+i;							//Acumulador Incremental...
		cout <<i<<"Suma Parcial:"<<suma<<endl;  //

	}
	cout<<"Suma "<<suma<<endl;					//
	promedio=suma/z;							//Obtiene Promedio
	cout<<"Promedio Entre 1-z es :"<< promedio<<endl;
	return 0;
}
