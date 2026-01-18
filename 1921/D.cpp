// 2026/01/18 19:15:46

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<long long> a1(n), a2(m);
    for (int i = 0; i < n; i++) cin >> a1[i];
    for (int i = 0; i < m; i++) cin >> a2[i];

    sort(a1.begin(), a1.end());
    sort(a2.begin(), a2.end());

    int i = 0, j = n - 1;
    int k = 0, l = m - 1;
    long long dif = 0;

    while (i <= j) {
        long long d1 = llabs(a1[i] - a2[k]);
        long long d2 = llabs(a1[i] - a2[l]);
        long long d3 = llabs(a1[j] - a2[k]);
        long long d4 = llabs(a1[j] - a2[l]);

        long long mx = max({d1, d2, d3, d4});

        if (mx == d1) {
            dif += d1;
            i++; k++;
        } 
        else if (mx == d2) {
            dif += d2;
            i++; l--;
        } 
        else if (mx == d3) {
            dif += d3;
            j--; k++;
        } 
        else {
            dif += d4;
            j--; l--;
        }
    }

    cout << dif << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}
