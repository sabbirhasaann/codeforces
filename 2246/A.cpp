// 2026/07/12 20:35:21
// https://codeforces.com/problemset/problem/2246/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n, cnt = 1;
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        if (i % 2)
            cout << cnt + 1 << " ";
        else
        {
            cout << cnt << " ";
            cnt += 2;
        }
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