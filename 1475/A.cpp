// 2025/07/28 07:35:33

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void soln()
{
    ll n;
    cin >> n;
    if (n & (n - 1))
        cout << "YES\n";
    else
        cout << "NO\n";
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