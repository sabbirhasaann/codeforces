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

    sort(b.begin(), b.end());
    int p = min(b[0] - a[0], a[0]);

    for (int i = 1; i < n; i++)
    {
        if (min(b[m - 1], a[i]) < p)
        {
            cout << "NO\n";
            return;
        }
        int pos = lower_bound(b.begin(), b.end(), p + a[i]) - b.begin();
        cout << pos << " ";
    }
    cout << endl;

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