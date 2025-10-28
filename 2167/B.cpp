// 2025/10/28 20:06:11

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
const int MAX_CHAR = 26;
void soln()
{
    vector<int> countChar(MAX_CHAR, 0);
    int flag = 1;
    int n;
    string s, t;
    cin >> n >> s >> t;

    for (int i = 0; i < n; i++)
    {
        countChar[s[i] - 'a']++;
    }
    for (int i = 0; i < n; i++)
    {
        countChar[t[i] - 'a']--;
    }

    for (int i = 0; i < MAX_CHAR; i++)
        if (countChar[i] != 0)
        {
            flag = 0;
            break;
        }
    if (flag)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
        soln();
    return 0;
}