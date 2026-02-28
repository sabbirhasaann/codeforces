// 2026/02/28 19:23:16
// https://codeforces.com/problemset/problem/1373/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    string str;
    cin >> str;
    int n = str.size(), cnt=0;
    stack<char> s;

    for(int i=0;i<n;++i){
        if(s.empty() || s.top() == str[i])
            s.push(str[i]);
        else{
            s.pop();
            ++cnt;
        }
    }
    
    if(cnt & 1)
        cout << "DA\n";
    else
        cout << "NET\n";
}


int main(){
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
        soln();
    return 0;
}