#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void soln()
{
    int n, x;
    cin >> n >> x;

    if (n <= 2)
        cout << 1 << endl;
    else
    {
        if (n < x)
            cout << 2 << endl;
        else
            cout << ceil((n + x - 3) / x) + 1 << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        soln();
    return 0;
}