// 2025/06/07 21:24:03

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void soln()
{
    int n, k, p;
    cin >> n >> k >> p;

    int value = (abs(k) + p - 1) / p;
    if (value <= n)
        cout << value << "\n";
    else
        cout << "-1\n";
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