#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;
typedef unsigned long long ull;
ull n, m;
int main()
{
    ios_base::sync_with_stdio(false);
    scanf("%llu %llu", &n, &m);
    printf("%llu\n", __gcd(n, m));
}