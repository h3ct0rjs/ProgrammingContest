#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main(){
fast;
int even=0,odd=0,positive=0, negative=0,n;
//even, odd, positive and negative
for(int i=1;i<=5;i++){
  cin>>n;
    if(n%2==0)
      even+=1;
    if(n%2!=0)
        odd+=1;
    if(n>0)
        positive+=1;
    if(n<0)
        negative+=1;
}
cout<<even<<" valor(es) par(es)"<<endl;
cout<<odd<<" valor(es) impar(es)"<<endl;
cout<<positive<<" valor(es) positivo(s)"<<endl;
cout<<negative<<" valor(es) negativo(s)"<<endl;
return 0;
}
