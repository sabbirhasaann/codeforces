// 2026/03/06 15:10:00
// https://codeforces.com/problemset/problem/1619/A

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
    if(n & 1){
        NO;
        return;
    }

    for (int i = 0, j = n/2; j<n; ++i, ++j)
    {
        if(s[i] != s[j]){
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