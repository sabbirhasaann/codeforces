#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, count = 0;
    cin >> n;
    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    for (int i = 0; i < n; i++)
    {
        if (a[i] > b[i])
        {
            a.pop_back();
            a.push_back(b[i]);
            sort(a.begin(), a.end());
            count++;
        }
    }

    cout << count << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}