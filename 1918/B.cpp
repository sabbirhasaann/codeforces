// 2026/05/26 00:26:49
// https://codeforces.com/problemset/problem/1918/B

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
    vector<pair<int, int>> vp(n);
    for (int i = 0; i < n; ++i)
        cin >> vp[i].first;

    for (int i = 0; i < n; ++i)
        cin >> vp[i].second;
    sort(vp.begin(), vp.end());
    for (int i = 0; i < n; ++i)
        cout << vp[i].first << " ";
    cout << endl;
    for (int i = 0; i < n; ++i)
        cout << vp[i].second << " ";
    cout << endl;
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
3
5
1 2 3 4 5
5 4 3 2 1
3
3 1 2
3 1 2
6
2 5 6 1 3 4
1 5 3 6 2 4
*/

/*out
3 2 5 1 4
3 4 1 5 2
1 2 3
1 2 3
2 3 4 6 5 1
1 2 4 3 5 6
*/