// 2026/05/16 06:46:19
// https://codeforces.com/problemset/problem/1324/A

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
    bool odd = false, even = false;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x & 1)
            odd = true;
        else
            even = true;
    }

    if (odd == true && even == true)
        NO;
    else
        YES;
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
3
1 1 3
4
1 1 2 1
2
11 11
1
100
*/

/*out
YES
NO
YES
YES
*/