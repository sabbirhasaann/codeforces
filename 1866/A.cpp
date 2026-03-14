// 2026/03/14 10:47:38
// https://codeforces.com/problemset/problem/1866/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n,minE=INT_MAX;
    cin >> n;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        minE = min(abs(x), minE);
    }
    cout << minE << endl;
}


int main(){
    ios_base::sync_with_stdio(false);

    int t=1;
    // cin >> t;
    while(t--)
        soln();
    return 0;
}

/*input
3
2 -6 5
*/

/*output
2
*/

/*input
1
-3
*/
/*output
3
*/

/*intput
5
0 -1 0 1 0
*/

/*output
0
*/