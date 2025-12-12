// A. Even Odds

// 2025/12/11 19:59:20

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void soln()
{
    long long int n, k, mid;
    cin >> n >> k;

    if (n & 1)
    {
        mid = (n >> 1) + 1;
        if (k > mid)
        {
            k -= mid;
            cout << 2 + (k - 1) * 2 << endl;
        }
        else
            cout << 1 + (k - 1) * 2 << endl;
    }

    else
    {
        mid = (n >> 1);
        if (k > mid)
        {
            k -= mid;
            cout << 2 + (k - 1) * 2 << endl;
        }
        else
            cout << 1 + (k - 1) * 2 << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    soln();
    return 0;
}