// 2026/05/23 22:06:54
// https://codeforces.com/problemset/problem/1988/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n, k;
    cin >> n >> k;
    --k;
    int cnt = 0;
    while (n > k)
    {
        n -= k;
        cnt++;
    }
    if (n > 1)
        ++cnt;
    cout << cnt << endl;
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
4
1 5
5 2
6 3
16 4
*/

/*out
0
4
3
5
*/