// 2025/11/05 18:33:16

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void soln()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (auto &x : a)
        cin >> x;
    for (auto &x : b)
        cin >> x;
    sort(a.begin(), a.end());
    sort(b.rbegin(), b.rend(), greater<int>());

    int idx = 0, d = 0;
    for (int i = 0, j = m - 1; i < j && idx < n;)
    {
        int d1 = abs(b[i] - a[idx]);
        int d2 = abs(b[j] - a[idx]);
        if (d1 > d2)
        {
            d += d1;
            i++;
        }
        else
        {
            d += d2;
            j--;
        }
        idx++;
    }
    cout << d << endl;
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