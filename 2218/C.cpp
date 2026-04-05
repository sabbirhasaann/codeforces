// 2026/04/04 20:22:07
// https://codeforces.com/problemset/problem/2218/C

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
    int s = 1, e = 3 * n;
    for(int i=1;i<=n;++i){
        cout << s << " " << e << " " << e - 1 << endl;
        ++s;
        e-=2;
    }
}


int main(){
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
        soln();
    return 0;
}