// 2026/05/16 07:23:24
// https://codeforces.com/problemset/problem/1486/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n, i = 0;
    cin >> n;
    long long sum = 0;
    bool possible = true;
    while (n--)
    {
        int x;
        cin >> x;
        if (sum + x < i)
            possible = false;

        else
            sum = (sum + x) - i;
        ++i;
    }

    if (possible)
        YES;
    else
        NO;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a) cin >> i;
    long long sum = 0, need = 0;
    for (int i = 0; i < n; ++i) {
        need += i;
        sum += a[i];
        if (sum < need) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main()
{
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--)
        soln();
    return 0;
}

/*in
6
2
1 2
2
1 0
3
4 4 4
2
0 0
3
0 1 0
4
1000000000 1000000000 1000000000 1000000000
*/

/*out
YES
YES
YES
NO
NO
YES
*/