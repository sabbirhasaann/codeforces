// 2026/07/12 21:17:23
// https://codeforces.com/problemset/problem/2246/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'

void soln()
{
    long long n;
    cin >> n;

    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }

    if (n == 2)
    {
        cout << -1 << endl;
        return;
    }

    cout << "1 2 3 ";
    long long sum = 6;

    for (int i = 4; i <= n; ++i)
    {
        cout << sum << " ";
        sum *= 2;
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--)
        soln();
    return 0;
}