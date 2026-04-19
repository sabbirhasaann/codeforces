// 2026/04/19 07:54:37
// https://codeforces.com/problemset/problem/1337/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int x,n,m;
    cin >> x >> n >> m;
    while(n-- && x > 20){
        x = x/2 + 10;
    }
    (x <= 10 * m) ? YES: NO;
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
7
100 3 4
189 3 4
64 2 3
63 2 3
30 27 7
10 9 1
69117 21 2
*/

/*out
YES
NO
NO
YES
YES
YES
YES
*/