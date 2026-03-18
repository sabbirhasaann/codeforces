// 2026/03/18 13:54:27
// https://codeforces.com/problemset/problem/1399/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n;
    cin >> n;

    vector<int> a(n), b(n);
    for(int &x: a)
        cin >> x;
    for(int &x: b)
        cin >> x;

    int a_min = *min_element(a.begin(), a.end());
    int b_min = *min_element(b.begin(), b.end());
    long long ans = 0;

    for(int i=0;i<n;++i)
        ans += max(a[i]-a_min, b[i]-b_min);
    cout << ans << endl;
    
}


int main(){
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
        soln();
    return 0;
}


/*input
5
3
3 5 6
3 2 3
5
1 2 3 4 5
5 4 3 2 1
3
1 1 1
2 2 2
6
1 1000000000 1000000000 1000000000 1000000000 1000000000
1 1 1 1 1 1
3
10 12 8
7 5 4
*/


/*output
6
16
0
4999999995
7
*/