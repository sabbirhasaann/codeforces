// 2026/02/18 12:39:04
// https://codeforces.com/problemset/problem/131/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    string s;
    cin >> s;
    int n = s.length();
    bool flag = true;
    for(int i=1;i<n;++i){
        if(s[i]>91)
        {
            flag = false;
            break;
        }
    }
    if(flag){
        if(s[0]<=91)
            s[0] = s[0] | 32;
        else
            s[0] = s[0] ^ 32;
        for(int i=1;i<n;++i)
            s[i] = s[i] ^ 32;        
    }

    cout << s << endl;

}


int main(){
    ios_base::sync_with_stdio(false);

    int t=1;
    // cin >> t;
    while(t--)
        soln();
    return 0;
}