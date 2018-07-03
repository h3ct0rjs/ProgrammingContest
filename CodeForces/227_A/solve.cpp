#include <bits/stdc++.h>
using namespace std;
#define endl '\n';
// http://www.cplusplus.com/reference/algorithm/find/
// 10k+10k...n times could lead to overflow in 32bits
// Shit I'm too rusty

int main() {
  ios_base::sync_with_stdio(false);
  int n;
  cin >> n;
  cout << n << endl;  // debug
  vector<int> data(n);
  vector<int>::iterator it;

  for (auto& it : data) {
    cin >> it;
  }

  for (auto& it : data) {
    cout << it << endl;  // debug
  }
  long long vasya = 0, petya = 0;
  int nquery;
  cin >> nquery;
  for (int i = 0; i < nquery; i++) {
    int query, indexright, indexleft;
    cin >> query;
    // finish
  }
  cout << vasya << ' ' << petya << endl;
  return 0;
}