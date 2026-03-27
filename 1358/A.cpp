// 2026/03/27 09:54:52
// https://codeforces.com/problemset/problem/1358/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n,m;
    cin >> n >> m;
    int ans = (m/2) * n;
    if(m&1)
        ans+= (n+1)/2;
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
5
1 1
1 3
2 2
3 3
5 3
*/

/*out
1
2
2
5
8
*/