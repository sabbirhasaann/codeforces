// 2026/05/23 20:33:13
// https://codeforces.com/problemset/problem/2229/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n, maX = INT_MIN, miN = INT_MAX;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        maX = max(maX, x);
        miN = min(miN, x);
    }
    cout << (maX - miN + 1) / 2 << endl;
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
10
5
1 2 3 4 5
5
3 3 3 3 3
6
5 6 7 1 2 3
2
2 5
4
1 3 8 7
4
6 2 1 8
3
1 3 9
5
1 10 1 10 10
8
10 8 5 9 1 6 9 10
2
1 1000
*/