// 2026/05/24 06:46:38
// https://codeforces.com/problemset/problem/439/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'

void soln()
{
    int n, d, devuTime = 0;
    cin >> n >> d;
    vector<int> t(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> t[i];
        devuTime += t[i];
    }

    devuTime += (n - 1) * 10;
    if (devuTime > d)
        cout << -1 << endl;
    else
        cout << 2 * (n - 1) + (d - devuTime) / 5 << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);

    int t = 1;
    // cin >> t;
    while (t--)
        soln();
    return 0;
}

/*in
3 30
2 2 1
*/
/*out
5*/

/*in
3 20
2 1 1
*/
/*out
-1
*/