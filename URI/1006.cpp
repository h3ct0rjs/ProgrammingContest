#include <bits/stdc++.h>
//beginners Problems 
//feedback:hfjimenez@utp.edu.co 
//Weighted mean : Σwx/Σw, where w is the weight of x, divide the total weight w.
/*
Read three numbers (variables A, B and C), which are the test scores of a student.
Then, calculate the average, knowing that the note A has a weight of 2,
the note B has a weight of 3 and the note C has a weight of 5.
Consider that each note can go from 0 to 10.0, always with one decimal place.
 
Input
The input file contains 3 floating-point numbers with one digit after the decimal point.
 
Output
Print MEDIA(average in portuguese) according to the following example,
with a blank space before and after the equal signal
*/

int main(void){
   float n1, n2, n3;
   scanf("%f %f %f",&n1,&n2, &n3 );
   printf("MEDIA = %.1f\n",((n1*2)+(n2*3)+(n3*5))/(2+3+5));
    return 0;   
}