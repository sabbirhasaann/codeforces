// 2025/11/03 18:45:46

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void soln()
{
    string s;
    cin >> s;
    bool flag = true;

    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] != s[0])
        {
            swap(s[i], s[0]);
            flag = false;
            break;
        }
    }
    if (!flag)
    {
        cout << "YES\n";
        cout << s << "\n";
    }
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