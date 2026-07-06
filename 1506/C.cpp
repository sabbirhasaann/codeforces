// 2026/07/06 07:07:25
// https://codeforces.com/problemset/problem/1506/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    string a, b;
    cin >> a >> b;

    unordered_set<string> us;

    for (int i = 0; i < a.length(); ++i)
    {
        string sb;
        for (int j = i; j < a.length(); ++j)
        {
            sb += a[j];
            us.insert(sb);
        }
    }

    int maxi = 0;
    for (int i = 0; i < b.length(); ++i)
    {
        string sb;
        for (int j = i; j < b.length(); ++j)
        {
            sb += b[j];
            if (us.find(sb) != us.end())
            {
                int l = sb.length();
                maxi = max(maxi, l);
            }
        }
    }

    cout << a.length() + b.length() - 2 * maxi << endl;
}

void solve()
{
    string a, b;
    cin >> a >> b;
    int n = a.size(), m = b.size();
    int ans = 0;
    for (int len = 1; len <= min(n, m); len++)
    {
        for (int i = 0; i + len <= n; i++)
        {
            for (int j = 0; j + len <= m; j++)
            {
                if (a.substr(i, len) == b.substr(j, len))
                {
                    ans = max(ans, len);
                }
            }
        }
    }
    cout << a.size() + b.size() - 2 * ans << "\n";
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
a
a
abcd
bc
hello
codeforces
hello
helo
dhjakjsnasjhfksafasd
adjsnasjhfksvdafdser
*/