#include <bits/stdc++.h>
//beginners Problems 
//feedback:hfjimenez@utp.edu.co 
//De la defincion dada en el judge:
//mayordedos(a,b)=(a+b+abs(a-b))/2

//del libro de Maratones, 
/*inline int max(int a,int b, int c){
    return a>b && a>c ? a : b>a && b>c ? b: c;
}*/

int maximod2(int a, int b){
    return ((a+b+abs(a-b))/2);          //lenta, pero funciona bien .
    }
int main(void){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    //int mayor=max(a,b,c);             //Solucion rapida, eficiente y alternativa.
    int may=maximod2(a,b);
    int mayor=maximod2(may,c);
    printf("%d eh o maior\n",mayor);
    return 0;   
}