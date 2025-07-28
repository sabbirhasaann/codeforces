// 2025/07/27 19:53:17

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void soln()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    if (a * m <= b)
        cout << n * a << endl;

    else
        cout << (n / m) * b + min((n % m) * a, b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    // cin >> t;
    while (t--)
        soln();
    return 0;
}