// 2026/06/05 16:02:35
// https://codeforces.com/problemset/problem/129/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n, sum = 0, ways = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        sum += a[i];
    }

    for (int i = 0; i < n; ++i)
    {
        int val = sum - a[i];
        if (!(val & 1))
            ++ways;
    }

    cout << ways << endl;
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
1
1
*/

/*out
1
*/

/*in
10
1 2 2 3 4 4 4 2 2 2
*/

/*out
8
*/

/*in
11
2 2 2 2 2 2 2 2 2 2 99
*/

/*out
1
*/