// 2025/10/28 21:11:16

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void soln()
{
    int n;
    cin >> n;
    long long a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int p : {
             2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101,
             103, 107, 109, 113, 127, 131, 137, 139, 149, 151})
        if (any_of(a, a + n, [&p](long long x)
                   { return x % p; }))
        {
            cout << p << '\n';
            break;
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