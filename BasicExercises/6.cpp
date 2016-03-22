#include <math.h> 
#include<iostream>

using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL) //Hace Rapido la lectura de datos, para maratones.
//Objetivo 
//6. Hacer un programa que muestre los primeros 40 múltiplos de 4.

int main(){
	int cantidadmultiplos=0;
	int j=0;
	while(cantidadmultiplos<=40) {
		if((j%4)==0){
			cout<<"Multiplo:"<<j<<endl;
			cantidadmultiplos++;
			}
			j++;
	}
	return 0;
}
