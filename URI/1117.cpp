#include <bits/stdc++.h>

#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
/*Write a program that reads two scores of a student. Calculate and print the average
 of these scores. Your program must accept only valid scores (between 0.0 and 10.0).
  Each score must be validated separately.

Input

The input file contains many floating-point numbers​​, positive or negative.
The program execution will be finished after the input of two valid scores.

Output

When an invalid score is read, you should print the message "nota inválida".
After the input of two valid scores, the message "média = "
must be printed followed by the average of the student.
The average must be printed with 2 numbers after the decimal point.
*/


int main(){
fast;
double score1, score2,media;

cout<<setprecision(2);
media=(score1 +score2)/2;
cout<<media<<endl;

return 0;
}
