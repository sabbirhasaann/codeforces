// 2026/02/19 21:12:32
// https://codeforces.com/problemset/problem/313/A

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
    if(n>0)
    {
        cout << n << endl;
        return;
    }
    cout << max(n/10, (n/100) * 10 + (n%10)) << endl;
}


int main(){
    ios_base::sync_with_stdio(false);

    int t=1;
    // cin >> t;
    while(t--)
        soln();
    return 0;
}