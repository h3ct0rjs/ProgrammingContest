#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main(){
int x,z,sumseq,count=0;
fast;
cin>>x;
while(cin>>z && x>=z);
for(int i=x;sumseq<z;i++){
  count+=1;
  sumseq+=i;
}
cout<<count<<endl;
return 0;
}
