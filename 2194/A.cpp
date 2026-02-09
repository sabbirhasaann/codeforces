// 2026/02/08 14:50:21

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void soln()
{
    int n,w;
    cin >> n >> w;
    int fence = (n / w);
    cout << fence * (w-1) + n%w << endl;
    
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while(t--)
        soln();
    return 0;
}

// https://codeforces.com/contest/2194/problem/A