#include <bits/stdc++.h>
#define PI 3.14159
//Code of two products.
//beginners Problems 
//feedback:hfjimenez@utp.edu.co 
/*
Make a program that calculates and print the volume of a sphere given the radius (R) of the circle. 
The formula to calculate the volume is: (4/3) * pi * R3. 
For the purposes of this problem the value of pi is 3.14159.
 
Tip: Use (4/3.0) or (4.0/3) in your formula, because some languages (including C++)
assume that the result dividing two integers is another integer. :)
 
Input
The input file contain an integer number.
 
Output
The output file will contain a message like the following example.
Remember the space before and after the equal signal. 
The value must be printed with 3 digits after the decimal point.*/
int main(void){
     int R;
     scanf("%d",&R);
     printf("VOLUME = %.3f\n",(4.0/3)*PI*R*R*R);
    return 0;   
}