#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void soln()
{
    ll r, g, b, ans = 0;
    cin >> r >> g >> b;
    ll total = r + g + b;
    vector<ll> v = {r, g, b};
    sort(v.begin(), v.end());

    cout << min((total / 3), (total - v[2])) << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    while (t--)
        soln();
    return 0;
}