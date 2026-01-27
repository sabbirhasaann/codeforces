// 2025/11/02 23:50:32

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void soln()
{
    int n, m;
    cin >> n >> m;
    vector<long long> a(n+m);
    long long sum = 0;
    for (int i = 0; i < n+m; i++)
        cin >> a[i];

    sort(a.begin(), a.end() - 1);
    reverse(a.begin(), a.end());

    for(int i=0;i<n;i++)
        sum+= a[i];

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