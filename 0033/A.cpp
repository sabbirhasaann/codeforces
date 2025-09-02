// 2025/09/03 00:36:37

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#include <bits/stdc++.h>
using namespace std;

void soln()
{
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> row_min(m + 1, INT_MAX);

    for (int i = 0; i < n; i++)
    {
        int r, c;
        cin >> r >> c;
        row_min[r] = min(row_min[r], c);
    }

    long long res = 0;
    for (int r = 1; r <= m; r++)
    {
        res += row_min[r];
    }

    res = min<long long>(res, k);

    cout << res << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    // cin >> t;
    while (t--)
        soln();
    return 0;
}