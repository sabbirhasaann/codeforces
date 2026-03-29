// 2026/03/29 08:22:27
// https://codeforces.com/problemset/problem/2170/A

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
    if(n==1)
        cout << 1 << endl;
    else if(n==2)
        cout << 9 << endl;
    else
        cout << max((4 * n * n - n - 4), 5 * (n*n - n - 1)) << endl;

}

void soln1(){
    int n;
    cin >> n;
    int ans = 1;
    if (n == 2) ans = 9;
    else if (n == 3 || n == 4) ans = 4 * n * n - n - 4;
    else if (n > 4) ans = 5 * n * n - 5 * n - 5;
    cout << ans << '\n';
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
5
1
2
3
4
5
*/

/*out
1
9
29
56
95
*/