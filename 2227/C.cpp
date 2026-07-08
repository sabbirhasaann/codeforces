// 2026/04/30 19:43:02
// https://codeforces.com/problemset/problem/2227/C

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
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; ++i)
        if (a[i] % 6 == 0)
            cout << a[i] << " ";

    for (int i = 0; i < n; ++i)
        if (a[i] % 2 == 0 && a[i] % 3 != 0)
            cout << a[i] << " ";
    for (int i = 0; i < n; ++i)
        if (a[i] % 2 != 0 && a[i] % 3 != 0)
            cout << a[i] << " ";

    for (int i = 0; i < n; ++i)
        if (a[i] % 3 == 0 && a[i] % 2 != 0)
            cout << a[i] << " ";

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
5
6
12 7 9 4 18 5
4
3 6 2 8
7
1 10 15 20 3 6 9
5
11 14 21 2 5
3
6 6 6
*/

/*out
12 18 4 7 5 9
2 8 3 6
6 10 20 1 15 3 9
21 5 11 2 14
6 6 6
*/