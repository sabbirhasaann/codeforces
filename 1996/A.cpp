// 2026/03/07 15:19:46
// https://codeforces.com/problemset/problem/1996/A

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
    cout << n/4 + (n%4) / 2 << endl;
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
3
2
6
8
*/

/*output
1
2
2
*/