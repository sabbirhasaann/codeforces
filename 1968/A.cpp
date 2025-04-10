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
        if ((gcd(i, x) + i) > max)
        {
            max = gcd(i, x) + i;
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