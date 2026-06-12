// 2026/06/12 07:22:53
// https://codeforces.com/problemset/problem/913/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n, m;
    cin >> n >> m;
    if (n > 27)
        cout << m << endl;
    else
        cout << m % (1 << n) << endl;
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
4
42
*/

/*out
10
*/

/*in
1
58
*/

/*out
0
*/

/*in
98765432
23456789
*/

/*out
23456789
*/