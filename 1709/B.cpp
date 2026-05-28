// 2026/05/28 11:53:37
// https://codeforces.com/problemset/problem/1709/B

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
    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<long long> prefd(n, 0), suff(n, 0);
    for (int i = 1; i < n; ++i)
    {
        long long d = arr[i - 1] - arr[i];
        prefd[i] = prefd[i - 1];
        if (d > 0)
            prefd[i] += d;
    }

    for (int i = n - 1; i >= 1; --i)
    {
        long long d = arr[i] - arr[i - 1];
        suff[i - 1] = suff[i];
        if (d > 0)
            suff[i - 1] += d;
    }

    for (int i = 0; i < m; ++i)
    {
        int s, t;
        cin >> s >> t;
        if (s < t)
            cout << prefd[t - 1] - prefd[s - 1] << endl;

        else
            cout << suff[t - 1] - suff[s - 1] << endl;
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
7 6
10 8 9 6 8 12 7
1 2
1 7
4 6
7 1
3 5
4 2
*/

/*out
2
10
0
7
3
1
*/