// 2026/06/05 16:08:52
// https://codeforces.com/problemset/problem/205/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'

void soln()
{
    int n, minValue = INT_MAX, idx = 1;
    cin >> n;
    map<int, vector<int>> mp;

    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;

        mp[x].push_back(i);
        minValue = min(minValue, x);
    }

    if (mp[minValue].size() > 1)
        cout << "Still Rozdil" << endl;
    else
        cout << mp[minValue][0] << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);

    int t = 1;
    while (t--)
        soln();
    return 0;
}

/*in
2
7 4
*/

/*out
2
*/

/*in
7
7 4 47 100 4 9 12
*/

/*out
Still Rozdil
*/