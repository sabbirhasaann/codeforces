// 2026/05/10 17:19:10
// https://codeforces.com/problemset/problem/276/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n, k, j = INT_MIN;
    cin >> n >> k;
    while (n--)
    {

        int f, t, jj;
        cin >> f >> t;
        if (t > k)
            jj = f - (t - k);
        else
            jj = f;
        j = max(jj, j);
    }
    cout << j << endl;
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
2 5
3 3
4 5
*/

/*out
4
*/

/*in
4 6
5 8
3 6
2 3
2 2
*/

/*out
3
*/

/*in
1 5
1 7
*/

/*out
-1
*/