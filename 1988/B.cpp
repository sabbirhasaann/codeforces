// 2026/05/27 16:40:34
// https://codeforces.com/problemset/problem/1988/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n;
    string s;
    cin >> n >> s;
    int c0 = 0, c1 = 0;

    for (int i = 0; i < n; ++i)
        if (s[i] == '1')
            ++c1;

    for (int i = 0; i < n; ++i)
    {
        if (s[i] == '0')
            if (i == 0 || s[i - 1] != '0')
                ++c0;
    }

    (c1 > c0) ? YES : NO;
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
1
0
1
1
2
01
9
100000001
9
000011000
*/

/*out
No
Yes
No
Yes
No
*/