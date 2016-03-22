#include <math.h> 
#include<iostream>

using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL) //Hace Rapido la lectura de datos, para maratones.
//Objetivo
//4. Hacer un programa que lea un número entero positivo y muestre los múltiplos de 3 comprendidos entre 1 el número leído.

int main(){
int z; 
cout<<"Ingrese un EnteroPositivo"<<endl;
cin>>z;
cout<<"\nLos Multiplos de Tres entre 1-n \n";
if(z>0)
{
	for (int i = 1; i <= z; ++i)
		{
			if((i%3)==0)
				cout<<"[:]"<<i<<endl;
		}
	}
	return 0;
}
