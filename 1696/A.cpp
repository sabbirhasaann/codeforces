// 2025/08/28 23:26:49

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void soln()
{
    long long n, z, maxi = 0;
    cin >> n >> z;

    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        long long val = (arr[i] | z);
        if (val > maxi)
            maxi = val;
    }

    cout << maxi << endl;
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