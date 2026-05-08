// 2026/04/21 06:28:35
// https://codeforces.com/problemset/problem/567/A

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
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n; ++i)
    {
        long long maX, miN;
        if (i == 0)
        {
            miN = abs(a[i] - a[1]);
            maX = abs(a[i] - a[n - 1]);
        }
        else if (i == n - 1)
        {
            miN = abs(a[i] - a[n - 2]);
            maX = abs(a[i] - a[0]);
        }
        else
        {
            miN = min(abs(a[i] - a[i - 1]), abs(a[i] - a[i + 1]));
            maX = max(abs(a[i] - a[0]), abs(a[i] - a[n - 1]));
        }
        cout << miN << " " << maX << endl;
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
4
-5 -2 2 7
*/

/*out
3 12
3 9
4 7
5 12
*/

/*in
2
-1 1
*/

/*out
2 2
2 2
*/