// 2026/06/18 17:31:56
// https://codeforces.com/problemset/problem/1206/C

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
    long long sum = 1LL * n * (2 * n + 1);

    if (n % 2 == 1)
    {
        YES;
        vector<int> ans(2 * n);
        int current_val = 1;

        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                ans[i] = current_val;
                ans[i + n] = current_val + 1;
            }
            else
            {
                ans[i] = current_val + 1;
                ans[i + n] = current_val;
            }
            current_val += 2;
        }

        for (int i = 0; i < 2 * n; i++)
        {
            cout << ans[i] << (i == 2 * n - 1 ? "" : " ");
        }
        cout << endl;
    }
    else
        NO;
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