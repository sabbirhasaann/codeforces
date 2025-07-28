// 2025/06/04 19:48:02

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve()
{
    vector<string> st;
    for (int i = 0; i < 3; i++)
    {
        string x;
        cin >> x;
        st.push_back(x);
    }
    cout << string(1, st[0][0]) + string(1, st[1][0]) + string(1, st[2][0]) << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}