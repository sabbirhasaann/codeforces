// 2025/06/13 08:12:39

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void soln()
{
    ll a, b, n;
    cin >> a >> b >> n;

    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    ll timer = b;
    ll seconds = 0;
    for (int i = 0; i < n; i++)
    {
        timer = min(a, timer + arr[i]);
        seconds++;
        timer--;
        if (timer == 0)
            break;
    }
    while (timer > 0)
    {
        seconds++;
        timer--;
    }
    cout << seconds << "\n";
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