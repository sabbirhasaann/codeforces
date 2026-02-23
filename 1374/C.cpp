// 2026/02/23 19:09:39
// https://codeforces.com/problemset/problem/1374/C

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

    int balance = 0, moves = 0;
    for(int i=0;i<n;++i)
    {
        if(s[i]==')')
            --balance;
        else
            ++balance;

        if(balance<0){
            ++moves;
            balance = 0;
        }
    }
    cout << moves << endl;
}

void soln1(){
    int n;
    string s;
    cin >> n >> s;
    int ans = 0;
    int bal = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '(') ++bal;
        else {
            --bal;
            if (bal < 0) {
                bal = 0;
                ++ans;
            }
        }
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