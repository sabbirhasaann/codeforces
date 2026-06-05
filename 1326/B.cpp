// 2026/06/05 07:12:06
// https://codeforces.com/problemset/problem/1326/B

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
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x > 0)
        {
            sum += x;
            cout << sum << " ";
        }
        else
            cout << sum + x << " ";
    }
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
5
0 1 1 -2 1
*/

/*out
0 1 2 0 3
*/

/*in
3
1000 999999000 -1000000000
*/

/*out
1000 1000000000 0
*/

/*in
5
2 1 2 2 3
*/
/*out
2 3 5 7 10
*/