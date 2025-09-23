#include <bits/stdc++.h>
using namespace std;
// #define ll long long
#define endl '\n'
using ll = long long;

#include <bits/stdc++.h>
using namespace std;

void soln2()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    if (!(cin >> n >> m))
        cout << 0 << endl;

    int k = min(n, m);
    cout << (k + 1) << '\n';
    for (int i = 0; i <= k; ++i)
        cout << i << ' ' << (k - i) << '\n';
}

bool isIntegerDistance(int x1, int y1, int x2, int y2)
{
    ll dx = ll(x2) - ll(x1);
    ll dy = ll(y2) - ll(y1);
    ll s = dx * dx + dy * dy;                      // squared distance, exact in 64-bit for given constraints
    ll r = (ll)floor(sqrt((long double)s) + 0.5L); // round to nearest integer safely
    return r * r == s;
}

// bool isNonInt(int x1, int y1, int x2, int y2)
// {
//     // cout << x1 << " " << y1 << " " << x2 << " " << y2 << ": ";
//     double num = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) * 1.0);
//     // cout << num << endl;
//     return num == floor(num);
// }

void soln()
{
    int n, m, i, j;
    cin >> n >> m;
    i = 0;
    j = 1;
    vector<pair<int, int>> v;
    while (i != n + 1 && j != m + 1)
    {
        v.push_back({i, j});
        i++;
        j++;
    }

    // cout << "i-1: " << i - 1 << endl;
    for (int k = i - 1; k != n + 1; k++)
    {
        // cout << "K:" << k << endl;
        int flag = 1;
        for (pair<int, int> p : v)
        {
            // cout << isNonInt(k, 0, p.first, p.second) << endl;
            if (isIntegerDistance(k, 0, p.first, p.second))
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            v.push_back({k, 0});
            break;
        }
    }

    cout << v.size() << endl;
    for (pair<int, int> p : v)
        cout << p.first << " " << p.second << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    while (t--)
        soln2();
    return 0;
}