#include <math.h> 
#include<iostream>

using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL) //Hace Rapido la lectura de datos, para maratones.
//Objetivo 
//10. Hacer un programa que lea dos números enteros y calcule la potencia resultante asumiendo que el primero 
//de los números leídos es la base y el segundo el exponente.

int main(){
	int n1, n2;
	double productoria=1;
	cout<<"Ingrese dos numeros enteros"<<endl;
	cin>>n1>>n2;
	for(int k=1;k<=n2;k++){
		productoria=n1*productoria;
		cout<<"Parcial: "<<productoria<<endl;
	}
	cout<<endl<<"El Producto total es:" <<productoria<<endl;
	//What Do you need to do Here 
	return 0;
}
