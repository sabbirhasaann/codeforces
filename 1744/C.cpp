// 2026/07/01 06:18:06
// https://codeforces.com/problemset/problem/1744/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'

int binarySearch(vector<int> &a, int k)
{
    int ans = -1, l = 0, h = a.size() - 1;
    while (l <= h)
    {
        int mid = l + (h - l) / 2;

        if (a[mid] > k)
        {
            ans = a[mid];
            h = mid - 1;
        }
        else
            l = mid + 1;
    }
    return ans;
}

void soln()
{
    int n;
    char c;
    string s;
    cin >> n >> c >> s;
    if (c == 'g')
        cout << 0 << endl;
    else
    {
        map<char, vector<int>> mp;

        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] == c || s[i] == 'g')
                mp[s[i]].push_back(i + 1);
        }
        int nn = mp[c].size();
        int maxi = -1;
        for (int i = 0; i < mp[c].size(); ++i)
        {
            int x = mp[c][i];
            int ans = binarySearch(mp['g'], x);
            if (ans != -1)
                maxi = max(maxi, ans - x);
            else
                maxi = max(maxi, n - x + mp['g'][0]);
        }
        cout << maxi << endl;
    }
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
6
5 r
rggry
1 g
g
3 r
rrg
5 y
yrrgy
7 r
rgrgyrg
9 y
rrrgyyygy
*/

/*out
3
0
2
4
1
4
*/