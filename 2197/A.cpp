// 2026/02/11 20:09:35
// https://codeforces.com/problemset/problem/2197/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void soln()
{
    int x;
    cin >> x;
    
    
    if(x%9 != 0)
    {
        cout << 0 << endl;
        return;
    }

    int cnt = 0;
    for(long long y = x; y <= x + 100; ++y){
        long long tmp = y;
        int dy = 0;
        while(tmp){
            dy += tmp%10;
            tmp/=10;
        }
        if(y-dy == x)
            cnt++;
    }
    cout << cnt << endl;
    
}


int main(){
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
        soln();
    return 0;
}