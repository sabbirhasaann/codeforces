#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
void solve()
{
    int x;
    cin >> x;

    int y, max = -1;
    for (int i = 1; i < x; i++)
    {
        int gcd_v = gcd(i, x);
        if ((gcd_v + i) > max)
        {
            max = gcd_v + i;
            y = i;
        }
    }
    cout << y << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
        solve();
}