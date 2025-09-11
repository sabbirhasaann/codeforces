#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    int n;
    cin >> n;

    vector<int> b(n), a(n);
    unordered_map<int, vector<int>> freq;

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        freq[b[i]].push_back(i);
    }

    int x = 1;
    for (pair<int, vector<int>> p : freq)
    {
        int k = p.first;
        vector<int> v = p.second;
        if (v.size() % k != 0)
        {
            cout << -1 << endl;
            return;
        }

        for (int i = 0; i < v.size(); i++)
        {
            a[v[i]] = x;
            if ((i + 1) % k == 0)
                x++;
        }
    }

    for (auto &i : a)
        cout << i << " ";
    cout << endl;
}
void soln()
{
    int n, sum = 0, y = 1;
    cin >> n;
    set<int> s;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }

    for (int x : s)
        sum += x;

    if (sum <= n)
    {
        for (int x : s)
        {
            for (int i = 0; i < x; i++)
                arr.push_back(y);
            y++;
        }
    }
    else
    {
        cout << -1 << endl;
        return;
    }
    for (int x : arr)
        cout
            << x << " ";
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        // soln();
        solve();
    return 0;
}