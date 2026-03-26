// 2026/03/26 17:31:07
// https://codeforces.com/problemset/problem/2074/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int l,r,d,u;
    cin >> l >> r >> d >> u;
    int w,x,y,z;
    w = l*l;
    x = u*u;
    y = r*r;
    z = d*d;

    if(l+r == d+u && w == x && x == y && y == z && z == w)
        YES;
    else
        NO;
}


int main(){
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
        soln();
    return 0;
}

/*in
2
2 2 2 2
1 2 3 4
*/

/*out
Yes
No
*/