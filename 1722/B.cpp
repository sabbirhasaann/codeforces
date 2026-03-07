// 2026/03/07 15:45:53
// https://codeforces.com/problemset/problem/1722/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n;
    string s,t;
    cin >> n >> s >> t;

    for(int i=0;i<n;++i)
    {
        if((s[i]=='R' && t[i] != 'R') || (s[i] != 'R' && t[i] == 'R')){
            NO;
            return;
        }
    }
    YES;
}


int main(){
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
        soln();
    return 0;
}