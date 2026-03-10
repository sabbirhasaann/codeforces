// 2026/03/10 08:35:12
// https://codeforces.com/problemset/problem/2009/B

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
    stack<int> s;
    for(int i=0;i<n;++i){
        for(int j=0;j<4;++j){
            char c;
            cin >> c;
            if(c=='#')
                s.push(j+1);
        }
    }

    while(!s.empty())
    {
        cout << s.top() <<" ";
        s.pop();
    }
    cout << endl;
}


int main(){
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
        soln();
    return 0;
}