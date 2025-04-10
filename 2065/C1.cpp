#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

vector<int> input_array(int n)
{
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    return arr;
}

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<int> a = input_array(n);
    vector<int> b = input_array(m);

    int p = min(b[0] - a[0], a[0]);

    for (int i = 1; i < n; i++)
    {
        if (max(b[0] - a[i], a[i]) < p)
        {
            cout << "NO\n";
            return;
        }

        if (min(b[0] - a[i], a[i]) >= p)
            p = min(b[0] - a[i], a[i]);
        else
            p = max(b[0]-a[i], a[i]);
    }
    cout << "YES\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}