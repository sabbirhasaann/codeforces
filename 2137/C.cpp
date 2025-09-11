// 2025/09/07 20:32:13

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void soln()
{
    long long a, b;
    cin >> a >> b;

    if (b % 2 == 0)
    {
        long long x = b / 2;
        if ((1LL * a * x) % 2)
        {
            cout << -1 << endl;
            return;
        }

        cout << (1LL * a * x) + 2 << endl;
    }
    else
    {
        if ((1LL * a * b) % 2 == 0)
        {
            cout << -1 << endl;
            return;
        }
        cout << (1LL * a * b) + 1 << endl;
    }
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