#include <math.h>
#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
//INPUT  N (1 ≤ N ≤ 100)
/*
Input

The input contains several test cases. The first contains
the number of test cases N (1 ≤ N ≤ 100).
Each of the following N lines contain an integer X (1 ≤ X ≤ 108),
that can be or not a perfect number.

Output
For each test case output the message “X eh perfeito” (X is perfect) or
“X nao eh perfeito” (X isn't perfect) according with to above specification.
*/
int main(){
    int z,n;
    int acu=0;
    cin>>n;                               //Casos.
    for(int j=1;j<=n;++j){
    	cin>>z;
    	for (int i = 1; i<=z; ++i)           //Calcula Divisores, y Suma.
    	{
    		if( (z%i)==0)
    		{
    			acu=acu+i;
    			}
    	}
    	if(acu==z)
    		printf("%d eh perfeito\n",z);
    	printf("%d nao eh perfeito\n",z);
    }
    return 0;
}
/*
int square_root = (int) sqrt(num) + 1;
for (i = 1; i < square_root; i++){
if (num % i == 0)
    cout << i << num/i << endl;
}
*/
