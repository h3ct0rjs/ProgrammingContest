#include <math.h> 
#include<iostream>
#include <stdio.h>

using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL) //Hace Rapido la lectura de datos, para maratones.

//Objetivo 
//19. Hacer un programa que lea un número entero de 2 dígitos y muestre los enteros comprendidos entre ambos dígitos.

int main(){
  int numero,u,d, aux;
  printf("Ingresa un Numero de Dos Digito\n");
  cin>>numero;
  u=numero%10;      //Obtiene el resto del numero para obtener unidades, decenas y centenas
  aux=numero-u;     //820
  aux=aux%100;      //resto 20
  d=aux/10;         //20/10=2
  printf("U:%d\n",u); 
  printf("D:%d\n",d);
  printf("\nNUMERO ORIGINAL ES:%d\n",numero);
  printf("Numeros Comprendidos entre Ambos Digitos\n");  
  for (int i=u; i<=d; ++i)
  {
   printf("\t%d,",i);
    
  }

  return 0;
}