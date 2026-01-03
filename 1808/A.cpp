#include <bits/stdc++.h>
using namespace std;

int luckiness(int x)
{
    int maxD = 0, minD = 9;
    while (x)
    {
        int d = x % 10;
        maxD = max(maxD, d);
        minD = min(minD, d);
        x /= 10;
    }
    return maxD - minD;
}

void solve()
{

    int l, r;
    cin >> l >> r;

    if (r - l >= 100)
    {
        for (int k = l; k <= r; k++)
        {
            if (k % 100 == 90)
            {
                cout << k << '\n';
                break;
            }
        }
    }

    else
    {
        int best = l;
        int bestLuck = luckiness(l);
        for (int i = l + 1; i <= r; i++)
        {
            int curr = luckiness(i);
            if (curr > bestLuck)
            {
                bestLuck = curr;
                best = i;
                if (curr == 9)
                    break;
            }
        }
        cout << best << '\n';
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}