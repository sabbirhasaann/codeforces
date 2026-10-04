// 2026/10/04 19:06:17
// https://codeforces.com/problemset/problem/2266/C

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

    int zeros_right = 0, ones_left = 0;
    for (int i = 0; i < n; i++)
        if (s[i] == '0')
            zeros_right++;
    if (s[0] == '1')
    {
        cout << zeros_right << endl;
        return;
    }

    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            ones_left++;
        else
            zeros_right--;
        ans = min(ans, zeros_right + ones_left);
    }
    cout << ans << endl;
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