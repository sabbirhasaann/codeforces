#include <bits/stdc++.h>
using namespace std;

void soln()
{
    string s;
    cin >> s;
    int ans = 0, n = s.size();
    for (int i = 0; i < n; i++)
    {
        ans++;
        for (int j = i; j < n; j++)
        {
            if (s[j] != s[i])
            {
                i = j - 1;
                break;
            }
            if (j == n - 1)
            {
                i = 2 * n;
                break;
            }
        }
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == '0' && s[i + 1] == '1')
        {
            ans--;
            break;
        }
    }
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        soln();
}