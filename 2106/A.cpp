// 2025/07/16 23:24:36

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void soln()
{
    int n, one = 0, total_one = 0;
    string s;
    cin >> n >> s;

    for (int i = 0; i < n; i++)
        if (s[i] - '0' == 1)
            one++;
    for (int i = 0; i < n; i++)
        if (s[i] - '0' == 0)
            total_one += one + 1;
        else if (s[i] - '0' == 1)
            total_one += one - 1;
    cout << total_one << endl;
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