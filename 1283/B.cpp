// 2026/06/18 18:22:02
// https://codeforces.com/problemset/problem/1283/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n, k;
    cin >> n >> k;
    int q = n / k;
    int r = n % k;
    if (r >= (k / 2))
        r = k / 2;
    cout << q * k + r << endl;
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