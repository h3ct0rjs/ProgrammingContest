#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef unsigned long long ull;

ull mcd(ull a, ull b)
{
    while (b != 0)
    {
        a %= b;
        swap(a, b);
    }
    return a;
}

ull mcm(ull a, ull b)
{
    return ((a * b) / mcd(a, b));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ull a, b;
    cin >> a >> b;
    cout << mcd(a, b) << endl;
}