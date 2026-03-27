// 2026/03/27 13:00:43
// https://codeforces.com/problemset/problem/2051/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    ll n,a,b,c,q,r,ans;
    cin >> n >> a >> b >> c;
    q = n/(a+b+c);
    r = n%(a+b+c);
    ans = 3*q;
    if(r){
        ++ans;
        r -= min(a,r);
    }
    if(r){
        ++ans;
        r -= min(b,r);
    }
    if(r){
        ++ans;
        r -= min(c,r);
    }
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

/*in
4
12 1 5 3
6 6 7 4
16 3 4 1
1000000000 1 1 1
*/

/*out
5
1
6
1000000000
*/