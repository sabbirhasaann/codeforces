// 2026/07/05 02:52:44
// https://codeforces.com/problemset/problem/499/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n, m;
    cin >> n >> m;
    unordered_map<string, string> mp;
    for (int i = 0; i < m; ++i)
    {
        string a, b;
        cin >> a >> b;
        mp[a] = b;
    }

    for (int i = 0; i < n; ++i)
    {
        string s;
        cin >> s;
        if (s.length() <= mp[s].length())
            cout << s << " ";
        else
            cout << mp[s] << " ";
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
4 3
codeforces codesecrof
contest round
letter message
codeforces contest letter contest
*/

/*out
codeforces round letter round
*/

/*in
5 3
joll wuqrd
euzf un
hbnyiyc rsoqqveh
hbnyiyc joll joll euzf joll
*/

/*out
hbnyiyc joll joll un joll
*/