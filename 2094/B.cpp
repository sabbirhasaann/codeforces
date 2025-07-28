// 2025/06/05 19:07:31

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve()
{
    int n, m, l, r;
    cin >> n >> m >> l >> r;
    int diff = m - abs(l);
    int lm, rm = 0;
    if (diff < 0)
    {
        lm = l - diff;
        rm = lm + m;
    }
    else
    {
        lm = l;
        rm = diff;
    }

    cout << lm << " " << rm << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}