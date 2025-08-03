// 2025/07/31 21:19:43

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void soln()
{

    ll n, sum = 0, minn = INT_MAX, neg = 0;
    cin >> n;
    vector<ll> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += abs(arr[i]);
        if (arr[i] < 0)
            neg++;
        if (abs(arr[i]) < minn)
            minn = abs(arr[i]);
    }
    if (neg % 2)
        sum = sum - 2 * minn;
    cout << sum << endl;
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