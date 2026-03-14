// 2026/03/14 10:54:42
// https://codeforces.com/problemset/problem/1389/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    
    int l,r;
    cin >> l >> r;
    int mul = (r/l) * l;
    if(mul<=r && mul>l)
        cout << l <<" " << mul << endl;
    else
        cout << -1 <<" " << -1 << endl;
}


int main(){
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
        soln();
    return 0;
}

/*input
4
1 1337
13 69
2 4
88 89
*/

/*output
6 7
14 21
2 4
-1 -1
*/