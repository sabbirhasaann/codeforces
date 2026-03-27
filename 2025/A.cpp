// 2026/03/27 14:29:34
// https://codeforces.com/problemset/problem/2025/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    string s,t;
    cin >> s >> t;
    int i=0,n=s.length(),m=t.length(),ans=0;
    while(i<n && i<m){
        if(s[i]!=t[i])
            break;
        ++i;
    }
    ans = n + m;
    if(i)
        ans = ans - i + 1;
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
3
GARAGE
GARAGEFORSALE
ABCDE
AABCD
TRAINING
DRAINING
*/

/*out
14
10
16
*/