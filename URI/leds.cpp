#include <bits/stdc++.h>
#include <cmath>      //log10
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
//prototype functions.
int howmanyleds(int digit);
int numberofdigits(int number);

int main(){
int n,j;
cin>>n;
fast;
/*
for(int i=1;i<=n;i++){                      //Test Cases. from 1 to n. max n =:2000, max number for j=10^100
//  cin>>j;                                  //receibe the number  j.

//cout<<howmanyleds(j)+1<<" leds"<<endl;
  }
*/
return 0;
}

int howmanyleds(int digit){
  switch (digit) {
    case 0:       //Each case, return the number of leds require to
    return 6;
    break;

    case 1:
    return 2;
    break;

    case 2:
    return 5;
    break;

    case 3:
    return 5;
    break;

    case 4:
    return 4;
    break;

    case 5:
    return 6;
    break;

    case 6:
    return 6;
    break;

    case 7:
    return 3;
    break;

    case 8:
    return 7;
    break;

    case 9:
    return 6;
    break;
  }
}
