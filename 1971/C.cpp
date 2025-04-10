#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int count = 0;
    for (int i = min(a, b); i <= max(a, b); i++)
    {
        if (i == c)
            count++;
        else if (i == d)
            count++;
    }
    if (count == 1)
        cout << "YES\n";

    else
        cout << "NO\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}