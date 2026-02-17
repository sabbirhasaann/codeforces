// 2026/02/17 20:52:42
// https://codeforces.com/problemset/problem/133/A

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
    for(int i=0;i<s.length();++i){
        char c = s[i];
        if(c == 'H' || c == 'Q' || c == '9')
        {
            YES;
            return;
        }
    }

    NO;
}


int main(){
    ios_base::sync_with_stdio(false);

    int t=1;
    // cin >> t;
    while(t--)
        soln();
    return 0;
}