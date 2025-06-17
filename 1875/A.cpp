// 2025/06/13 08:12:39

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void soln()
{
    ll a, b, n, sum;
    cin >> a >> b >> n;

    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    if (b == 1)
        sum = 0;
    else
        sum = b - 1;

    for (int i = 0; i < n; i++)
        sum += min(a, arr[i]);
    cout << sum << "\n";
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