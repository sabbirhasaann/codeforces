// 2025/06/11 10:23:01

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void soln()
{
    int n;
    string s;
    cin >> n >> s;

    ll hy, un;
    hy = un = 0;

    for (char x : s)
    {
        if (x == '-')
            hy++;
        else if (x == '_')
            un++;
    }

    if (hy < 2 || un == 0)
    {
        cout << 0 << endl;
        return;
    }
    ll lp = hy / 2;
    ll ls = (hy + 1) / 2;
    cout << lp * un * ls << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
        soln();
    return 0;
}