#include <math.h> 
#include<iostream.h>
using namespace std;										//Si esta linea no se adicciona para usar stdout y stdin debe ser std::cout

#define fast ios_base::sync_with_stdio(false);cin.tie(NULL) //Hace Rapido la lectura de datos, para maratones.

//objetivo
//1.Hacer un programa que lea un número entero positivo y muestre los enteros comprendidos entre 1 y el número leído.

int main(){
	int z;
	cout << "Ingrese Valor Entero: \n";
	cin>>z;		//Recibe dato entrada entero, esto se puede hacer con scanf("%tipodato",&variable);
	for(int j=1; j<=z;j++)
		cout <<"[:] " <<j<<endl ;
	return 0;
}
