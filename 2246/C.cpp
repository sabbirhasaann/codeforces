// 2026/07/13 11:56:35
// https://codeforces.com/problemset/problem/2246/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n, ans = 0;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < (1 << n); ++i)
    {
        int idx = 1;
        long long sum = 0;

        for (int j = 0; j < n; ++j)
        {
            if (i & (1 << j))
            {
                cout << a[j] << " ";
                int factor = (idx % 2) ? 1 : -1;
                sum += a[j] * factor;
                ++idx;
            }
        }
        cout << "sum " << sum << endl
             << endl;
        if (sum == 0)
            ++ans;
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
4
5
-1 1 1 2 3
3
1 2 3
4
1 3 5 7
14
-1 -1 -1 1 2 2 3 3 3 5 5 5 5 5
*/

/*out
6
1
1
1536
*/