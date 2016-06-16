#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main(){
int n,x,y;
cin>>n;
fast;
while(n--) {
  scanf("%d %d", &x, &y);
  printf("%d cm2\n", (x*y)/2);
 }
return 0;
}
