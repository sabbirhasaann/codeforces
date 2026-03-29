// 2026/03/29 09:05:46
// https://codeforces.com/problemset/problem/1843/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    long long n,ans=0;
    cin >> n;
    while(n){
        ans += n;
        n/=2;
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
6
3
10
37
1
10000000000000000
15
*/

/*out
4
18
71
1
19999999999999980
26
*/