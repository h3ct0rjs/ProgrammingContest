#include <bits/stdc++.h>
//beginners Problems 
//feedback:hfjimenez@utp.edu.co 
//Code of two products.
/*
In this problem the task is read a code for a product 1, 
the number of units of product 1, the price for one unit of product 1, 
the code for a product 2, the number of units of product 2, 
the price for one unit of product 2 and calculates and print the amount to be paid.
Input
The input file contains two lines of data. In each contains 3 numbers: 
two integers and a floating number with 2 digits after the decimal point.
 
Output
 
The output file will contain a message like the following example where "Valor a pagar" means
Value to Pay. Remember the space after the ":" and after the "$" symbol. The value must be printed with 2 digits after the point.
*/
int main(void){
     int codeproduct, units;
    double total=0;
     double price;
     for(int i=0;i<2;i++){
        scanf("%d %d %lf",&codeproduct,&units,&price);      
        total+=units*price;
     }
   printf("VALOR A PAGAR: R$ %.2f\n",total);
    return 0;   
}