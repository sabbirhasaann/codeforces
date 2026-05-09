// 2026/05/09 20:51:19
// https://codeforces.com/problemset/problem/1872/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n, kmax = INT_MAX;
    cin >> n;
    while (n--)
    {
        int d, s, k;
        cin >> d >> s;
        k = d + (s - 1) / 2;
        kmax = min(kmax, k);
    }
    cout << kmax << endl;
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
7
1
2 2
3
2 8
4 3
5 2
1
200 200
4
1 20
5 9
3 179
100 1
2
10 1
1 18
2
1 1
1 2
3
1 3
1 1
1 3
*/

/*out
2
5
299
9
9
1
1
*/