// 2026/06/05 06:47:54
// https://codeforces.com/problemset/problem/1705/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    ll sum = 0, zero = 0;
    for (int i = n - 2; i >= 0; --i)
    {
        if (a[i] == 0)
            ++zero;
        else
        {
            sum += zero + a[i];
            zero = 0;
        }
    }
    cout << sum << endl;
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

/*in
4
3
2 0 0
5
0 2 0 2 0
6
2 0 3 0 4 6
4
0 0 0 10
*/

/*out
3
5
11
0
*/