#include <math.h> 
#include<iostream>

using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL) //Hace Rapido la lectura de datos, para maratones.
//Objetivo 
//14. Hacer un programa que lea dos números enteros y muestre los múltiplos de 4 comprendidos entre el número menor y el número mayor.
int main(){
	int z1,z2;
	cout<<"Ingrese dos Numeros Enteros: ";
	cin>>z1>>z2;
	cout<<"multiplos de 4 comprendidos entre "<<z1<<" y "<<z2<<endl;
	for(z1;z1<z2;++z1){		
		if((z1%4)==0)
			cout<<z1<<endl;
	}	
	return 0;
}
