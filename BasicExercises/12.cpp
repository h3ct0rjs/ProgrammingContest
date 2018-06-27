#include <math.h> 
#include<iostream>
//<iframe src="https://embed.spotify.com/?uri=spotify%3Aartist%3A1IeyJXV4dgQVOR37D3eRV1" width="300" height="380" frameborder="0" allowtransparency="true"></iframe>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL) //Hace Rapido la lectura de datos, para maratones.
//Objetivo 
//12. Hacer un programa que calcule la suma de los primeros 20 múltiplos de 8.

int main(){
	float sumamultiplos;
	int countermultiplos=0;
	int counter=1;
	cout<<"counter"<<":"<<"sumamultiplos"<<endl;			

	while(countermultiplos<=20) {
		if((counter%8)==0)
		{	sumamultiplos=sumamultiplos+counter;
			cout<<counter<<":\t"<<sumamultiplos<<endl;			
			countermultiplos++;
		} 
		counter++;
	}
	cout<<"La suma de Primeros 20 Multiplos es"<<sumamultiplos<<endl;

	return 0;
}

