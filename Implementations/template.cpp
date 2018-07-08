#include <bits/stdc++.h>

using namespace std;

void debug_out() { cerr << endl; }
template <typename H, typename... T> void debug_out(H h, T... t) {
  cerr << " " << (h);
  debug_out(t...);
}


int main() {
#ifndef LOCAL
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
#define endl '\n'
#define debug(...) cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)
#else
#define debug(...) //
#endif

    int a = 19;
    string hector = "repirobito";
    debug(a, hector, 15);
  return 0;
}
