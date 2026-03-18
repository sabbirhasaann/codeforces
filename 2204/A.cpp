// 2026/03/18 13:18:03
// https://codeforces.com/problemset/problem/2204/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n, idx = 0;
    string s;
    cin >> n >> s;

    vector<int> gotBall(n, 0);
    gotBall[0] = 1;

    for(int i=0;i<n;++i){
        if(s[idx]=='R')
            ++idx;
        else
            --idx;
    
        ++gotBall[idx];
    }

    int cnt  = 0;
    for(int i=0;i<n;++i)
        if(gotBall[i]>=1)
            ++cnt;
    cout << cnt << endl;
    
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
3
4
RLRL
6
RRRRRL
9
RRLRRRRRL
*/

/*output
2
6
3
*/