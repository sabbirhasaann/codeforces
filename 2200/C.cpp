// 2026/02/27 20:32:30
// https://codeforces.com/problemset/problem/2200/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n;
    cin >> n;
    stack<char> s;

    for(int i=0;i<n;++i){
        char ch;
        cin >> ch;
        if(s.empty() || s.top() != ch)
            s.push(ch);
        else
            s.pop();
    }

    s.empty() ? YES: NO;
    
}


int main(){
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
        soln();
    return 0;
}