// https://codeforces.com/problemset/problem/1915/E

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; ++i) cin >> a[i];
    map<long long, long long> m;
    long long s = 0;
    m[0] = 1;
    for(int i = 0; i < n; ++i) {
        a[i] *= ((i % 2) ? -1 : 1);
        s += a[i];
        if(m[s]) {
            cout << "YES\n";
            return;
        }
        ++m[s];
    }
    cout << "NO\n";

}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
}

/*input
6
3
1 3 2
6
1 1 1 1 1 1
10
1 6 9 8 55 3 14 2 7 2
8
1 2 11 4 1 5 1 2
6
2 6 1 5 7 8
9
2 5 10 4 4 9 6 7 8
*/

/*output
YES
YES
NO
YES
NO
YES
*/