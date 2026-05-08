// 2026/04/25 21:16:41
// https://codeforces.com/problemset/problem/1714/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n, H, M, rh = 25, rm = 61;
    cin >> n >> H >> M;

    while (n--)
    {
        int Ch = H, Cm = M, h, m, dh, dm;
        cin >> h >> m;

        dm = (m - Cm + ((m < Cm) ? 60 : 0)) % 60;

        /* if alarm minute is less than sleeping minute add + 1*/
        if (m < Cm)
            ++Ch;

        dh = (h - Ch + ((h < Ch) ? 24 : 0)) % 24;

        if (dh < rh || (dh == rh && dm < rm))
        {
            rh = dh;
            rm = dm;
        }
    }
    cout << rh << " " << rm << endl;
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
1 6 13
8 0
3 6 0
12 30
14 45
6 0
2 23 35
20 15
10 30
*/

/*out
1 47
0 0
10 55
*/

/*in
4 23 36
23 31
23 43
23 29
23 43
*/

/*out
 */