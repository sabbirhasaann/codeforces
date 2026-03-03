// 2026/03/03 06:44:01
// https://codeforces.com/problemset/problem/1335/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n, a,b;
    cin >> n >> a >> b;
    for(int i=0;i<n;++i)
        cout << char((i+b)%b + 'a');
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