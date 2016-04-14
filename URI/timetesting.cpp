#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
void clocktaken(){


}
int main(){
fast;
int n;cin>>n;
clock_t t;
t = clock();
while(n--){
  cout<<"X"<<" ";
}
cout <<endl;
t = clock() - t;
double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
printf("took %f seconds to execute \n", time_taken);

return 0;
}
