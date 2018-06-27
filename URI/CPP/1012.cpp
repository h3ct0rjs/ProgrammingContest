#include <bits/stdc++.h>
#define PI 3.14159
//beginners Problems 
//feedback:hfjimenez@utp.edu.co 
/*
Input
The input file contains three double numbers with one digit after the decimal point.
 
Output
 
The output file contains 5 lines of data. Each line correspond to one of 
the areas described above, always with a corresponding message (in portuguese) and one space after 
the ":" and before the calculated number.All calculated number must be printed with 3 digits after
the decimal point.
 
Sample Inputs
3.0 4.0 5.2
Sample Outputs
TRIANGULO: 7.800        //BASE A HEIGHT C
CIRCULO: 84.949         //RADIUS C
TRAPEZIO: 18.200        //BASE A and B and C height
QUADRADO: 16.000        //sqrt(B)*sqrt(B)
RETANGULO: 12.000       //SIDES A AND B 
*/
int main(void){
     double A,B,C;
     scanf("%lf %lf %lf ",&A, &B , &C);
     printf("TRIANGULO: %.3f\n",((A*C)/2));
     printf("CIRCULO: %.3f\n",(PI*C*C));
     printf("TRAPEZIO: %.3f\n",( ((A+B)/2)*C ));
     printf("QUADRADO: %.3f\n",B*B);
     printf("RETANGULO: %.3f\n",B*A);
    return 0;   
}