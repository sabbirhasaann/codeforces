// 2025/08/20 04:10:38

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void soln()
{
    int n, mismatch = 0, even = 0, odd = 0;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i % 2 != arr[i] % 2)
        {
            mismatch++;
            if (arr[i] % 2)
                odd++;
            else
                even++;
        }
    }
    if (!(mismatch % 2) && odd == even)
        cout << mismatch / 2 << endl;
    else
        cout << -1 << endl;
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