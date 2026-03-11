// 2026/03/07 00:09:36
// https://codeforces.com/problemset/problem/1433/A

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
    cout << 10 * (s[0]-'1') + n * (n + 1) / 2 << endl;
}


int main(){
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
        soln();
    return 0;
}