#include <bits/stdc++.h>
//beginners Problems 
//feedback:hfjimenez@utp.edu.co 
/*
Write a program that reads the number of an employee, 
the number of hours that he worked in a month and the amount he received per hour.
Print the employee number and the salary that he will receive at end of the month, 
rounded to two decimal places.
Don’t forget to print end line after the result otherwise you will get “Presentation Error”.
Don’t forget the space before and after the equal signal and after the U$.
 
Input
The input file contains 2 integer numbers and 1 floating-point number, 
respectively the number, hours worked and the among received by an hour worked.
 
Output
Print the number and the salary of the employee, 
according to the given example, with a blank space before and after the equal signal.
*/
int main(void){
   int nuemployee,hours;
   float amount;
   scanf("%d %d %f",&nuemployee,&hours,&amount);
   printf("NUMBER = %d\n",nuemployee);
   printf("SALARY = U$ %.2f\n",hours*amount);
    return 0;   
}