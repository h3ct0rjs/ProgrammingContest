#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
//welcome monk.
int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);	//Fast IO
  long long n;
  cin>>n;
  long long vectorA[n];
  long long vectorB[n];
   //O(n) worst case!  100.000
  for(long long i=0;i<n;i++){ cin>>vectorA[i]; }
  for(long long j=0;j<n;j++){ cin>>vectorB[j]; }
  for(long long k=0;k<n;k++){ cout<<vectorA[k]+vectorB[k]<<" ";  }
  cout<<endl;
  return 0;
}
