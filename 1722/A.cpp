// 2026/03/06 14:36:29
// https://codeforces.com/problemset/problem/1722/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n;
    string s;

    cin >> n >> s;
    if(n==5){
        unordered_map<char,int> f;
        f['T'] = f['i'] = f['m'] = f['u'] = f['r'] = 1;
        for(int i=0;i<s.length();++i)
            --f[s[i]];
        
        if(f['T'] == 0 && f['i'] == 0 && f['m'] == 0 && f['u'] == 0 && f['r'] == 0){
            YES;
            return;
        }
            
    }
    NO;
}


int main(){
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
        soln();
    return 0;
}