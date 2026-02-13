// 2026/02/13 16:19:03
// https://codeforces.com/problemset/problem/1945/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void soln()
{
    long long a,b,m;
    cin >> a >> b >> m;
    cout << (m/a) + (m/b) + 2 << endl;
}


int main(){
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
        soln();
    return 0;
}