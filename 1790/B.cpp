// 2025/12/31 12:23:06

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void soln()
{
    int n, s, r;
    cin >> n >> s >> r;
    vector<int> a(n, 0);
    int mx = s - r, i;
    a[0] = mx;

    for (i = 1; i < n && r >= mx; i++, r -= mx)
        a[i] = mx;
    if (r && i < n)
        a[i] = r;
    for (int i = 1, j = n - 1; i < j && a[j] == 0;)
    {

        if (a[i] > 1)
        {
            a[j]++;
            a[i]--;
            j--;
        }
        else
            i++;
    }

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
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