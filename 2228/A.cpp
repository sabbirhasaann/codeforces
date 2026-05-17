// 2026/05/16 20:39:29
// https://codeforces.com/problemset/problem/2228/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n, one = 0, two = 0, ops = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 0)
            ++ops;
        else if (x == 1)
            ++one;
        else
            ++two;
    }
    int miN = min(one, two);
    ops += miN;
    one -= miN;
    two -= miN;
    cout << ops + (one / 3) + (two / 3) << endl;
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