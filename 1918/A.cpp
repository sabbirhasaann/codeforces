#include <bits/stdc++.h>
using namespace std;
void solve();
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
void solve()
{
    long long n, m;
    cin >> n >> m;
    long long ans = n * (m / 2);
    cout << ans << '\n';
}