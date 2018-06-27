#include <iostream>
#include <vector>
using namespace std;

int main(){
vector <int> easydata;	        //this will grow up dynamically. a vector of integer data type.
vector <string> words (50);	//This will be a vector of string type with 50 bytes..
vector <int> zeros (500,0);	//500 rows per one column  

//Tarea 1: Generar matrix de Adyacencia, y lista de adyacencias. 
int v;
cout<<"De cuantos Vertices es el grafo"<<endl;
cin>>v;
vector <int> matrixadyacencia(v,v);
matrixadyacencia.clear(); 	//clear the container matrixadyancecia. 
cout<<"Indique las conexiones en la matrix de adyacencia ACONTINUACION: "<<endl;

 for(int i=0;i<v; i++){		//This will fill the vector using a method of push_back.
     for(int j=0;j<v;j++){
	  int aux;
	  cout<<"Inserte Nodo["<<i<<"]"<<" Vertice["<<j<<"]"<<endl;
	  cin>> aux
	  matrixadyacencia.push_back(aux);
     }
}

 for(int i=0;i<v; i++){		//This will fill the vector using a method of push_back.
     for(int j=0;j<v;j++){
	  int aux;
	  cout<<"Inserte Nodo["<<i<<"]"<<" Vertice["<<j<<"]"<<matrixadyacencia[i][j];
     }
}





/*GrafOS Dirigidos  G es un par (V,E) donde V es un conjunto finito de nodos. y E es un conjunto de parejas
 * ordenadas donde cada elemento es un elemento de V y Es llamado conjunto de Aristas(edges.)
 *
 *  	Ejemplo : V={1,2,3,4,5,6}
 *  		E={(1,2),(2,2),(2,4),(2,5), (4,1) } Es un ejemplo de grafo dirigido.. 
 *
 * Ahora tambien hay grafos no diridos, los grafos se pueden representar mediante una matrix de adyancencias, o lista 
 * de adyacencias Es un ejemplo de grafo dirigido.. La lista de adyacencia usa menos memoria que la matriz de 
 * adyacencia. 
 * Si el grafo tiene 5 vertices neesitamos una matrix v*v osea 5*5 donde u=fila, representa un nodo y v =columna 
 * representa las conexiones con otros vertices. 
 *
 *
 * */

  return 0;
}
