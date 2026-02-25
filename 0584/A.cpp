// 2026/02/25 21:44:10
// https://codeforces.com/problemset/problem/584/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n,t;
    cin >> n >> t;
    if(n==1)
    {
        if(t==10)
            cout << -1;
        else
            cout << t ;    
        return;
    }
    int l;
    string s;

    if(t<10){
        l = n-1;
        s += (t + '0');
    }
    else{
        l = n-2;
        s += (1 + '0');
        s += '0';
    }
    
    for(int i=0;i<l;++i)
        s += '0';
    cout << s;
}


int main(){
    ios_base::sync_with_stdio(false);

    int t=1;
    // cin >> t;
    while(t--)
        soln();
    return 0;
}