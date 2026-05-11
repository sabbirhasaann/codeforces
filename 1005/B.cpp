// 2026/05/11 20:41:14
// https://codeforces.com/problemset/problem/1005/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    string s, t;
    cin >> s >> t;
    int n = s.length(), m = t.length();
    int i = n - 1, j = m - 1;

    while (i >= 0 && j >= 0 && s[i] == t[j])
    {
        --i;
        --j;
    }

    cout << i + j + 2 << endl;
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
test
west
*/

/*out
2
*/

/*in
codeforces
yes
*/

/*out
9
*/

/*in
test
yes
*/
/*
7
*/

/*in
a
ab
*/
/*out
1
*/