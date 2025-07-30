#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

ll solve()
{
    int n, m;
    cin >> n >> m;

    n %= m;
    int g = __gcd(n, m);
    int a = n / g;
    int b = m / g;

    if (n == 0)
        return 0;

    if (__builtin_popcount(b) > 1)
        return -1;

    return 1ll * __builtin_popcount(a) * m - n;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
        cout << solve() << endl;
}
