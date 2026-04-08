// 2026/04/08 10:31:48
// https://codeforces.com/problemset/problem/1635/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n,ans=0;
    cin >> n;
    while(n--){
        int x;
        cin >> x;
        ans |= x;
    }
    cout << ans << endl;
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
4
3
1 3 2
5
1 2 4 8 16
2
6 6
3
3 5 6
*/

/*out
3
31
6
7
*/