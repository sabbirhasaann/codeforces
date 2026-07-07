// 2026/06/12 20:16:24
// https://codeforces.com/problemset/problem/2236/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n, k;
    string s;
    cin >> n >> k >> s;
    vector<int> fa(k, 0);

    for (int i = 0; i < n; ++i)
        fa[i % k] += s[i] - '0';

    for (int i = 0; i < k; ++i)
    {
        if (fa[i] % 2 == 1)
        {
            NO;
            return;
        }
    }

    YES;
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
5
4 2
1010
3 2
111
3 3
111
3 1
110
1 1
1
*/

/*out
YES
NO
NO
YES
NO
*/