// 2026/02/27 20:01:12
// https://codeforces.com/problemset/problem/1883/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'

int binpow(int a, int b, int k)
{
    int ans = 1;
    while (b)
    {
        if (b & 1)
            ans = ans * a % k;
        a *= a % k;
        b >>= 1;
    }
    return ans;
}

void soln()
{
    int n, k;

    cin >> n >> k;
    vector<int> r(k, 0);

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        r[x % k]++;
    }

    int ans = INT_MAX;

    if (r[0])
        ans = 0;

    else
        for (int i = 1; i < k; ++i)
            if (r[i])
                ans = min(ans, k - i);
    if (k == 4)
    {
        int evens = r[0] + r[2];
        int ops;

        if (evens >= 2)
            ops = 0;
        else if (evens == 1)
            ops = 1;
        else
            ops = 2;
        ans = min(ans, ops);
    }
    cout << ans << endl;
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
15
2 5
7 3
3 3
7 4 1
5 2
9 7 7 3 9
5 5
5 4 1 2 3
7 4
9 5 1 5 9 5 1
3 4
6 3 6
3 4
6 1 5
3 4
1 5 9
4 4
1 4 1 1
3 4
3 5 3
4 5
8 9 9 3
2 5
1 6
2 5
10 10
4 5
1 6 1 1
2 5
7 7
*/

/*out
2
2
1
0
2
0
1
2
0
1
1
4
0
4
3
*/