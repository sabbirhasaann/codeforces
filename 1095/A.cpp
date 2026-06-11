// 2026/06/05 16:19:54
// https://codeforces.com/problemset/problem/1095/A

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

    vector<int> a(n);
    for (int &x : a)
        cin >> x;
    sort(a.begin(), a.end());
    if (n == 2)
        cout << 0 << endl;
    else
        cout << min(a[n - 2] - a[0], a[n - 1] - a[1]) << endl;
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
4
1 3 3 7
*/

/*out
2
*/

/*in
2
1 100000
*/

/*out
0
*/