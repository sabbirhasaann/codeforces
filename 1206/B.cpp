// 2026/05/10 19:06:50
// https://codeforces.com/problemset/problem/1206/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    long long n, zeros = 0, negs = 0, cost = 0;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        long long x;
        cin >> x;
        if (x == 0)
            ++zeros;
        else if (x < 0)
            ++negs;
        cost += abs(x);
    }

    if (zeros == n)
        cout << n << endl;
    else if (!zeros && negs % 2 == 1)
        cout << cost - n + 2 << endl;
    else
        cout << cost - n + 2 * zeros << endl;
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
2
-1 1
*/

/*out
2
*/

/*in
4
0 0 0 0
*/

/*out
4
*/

/*in
5
-5 -3 5 3 0
*/

/*out
5
-5 -3 5 3 0
*/