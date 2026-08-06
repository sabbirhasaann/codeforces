// 2026/08/04 20:27:11
// https://codeforces.com/problemset/problem/2254/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'

void soln()
{

    vector<int> a(3);
    for (int i = 0; i < 3; ++i)
        cin >> a[i];
    sort(a.begin(), a.end());
    if (a[0] == a[1] || a[0] == a[2] || a[1] == a[2])
        cout << 0 << endl;

    else
        cout << a[2] - a[1] << endl;
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
