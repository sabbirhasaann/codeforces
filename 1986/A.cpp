#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);
    cout << abs(a[1] - a[0]) + abs(a[2] - a[1]) << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}