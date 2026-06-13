// 2026/06/12 20:16:16
// https://codeforces.com/problemset/problem/2236/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n, miN = INT_MAX, maX = INT_MIN;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        miN = min(miN, x);
        maX = max(maX, x);
    }
    cout << maX - miN + 1 << endl;
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