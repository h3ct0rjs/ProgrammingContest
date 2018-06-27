#include <math.h> 
#include<iostream>

using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL) //Hace Rapido la lectura de datos, para maratones.
//objetivo
//3. Hacer un programa que lea un número entero positivo o negativo y muestre los enteros comprendidos entre 0 y el número leído.

int main(){
int z;
cout << "Ingrese Valor Entero: \n";
cin>>z;
if(z>0)									//El numero es positivo.	
	for (int i = 0; i <= z; ++i)		
	{
		cout <<"[:] " <<i<<endl ;
	}
	
else if(z<0)
	for (int j = 0; j >=z; --j)
	{
		cout <<"[:]" <<j<<endl ;
	}

else {
	cout <<"Error !";
}
	return 0;
}
