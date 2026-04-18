// 2026/04/18 07:54:30
// https://codeforces.com/problemset/problem/709/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n,b,d;
    cin >> n >> b >> d;
    long long total = 0, ans = 0;
    for(int i=0;i<n;++i){
        long long x;
        cin >> x;

        if(x<=b)
            total += x;
        if(total > d){
            ++ans;
            total = 0;
        }
    }
    cout << ans << endl;
}


int main(){
    ios_base::sync_with_stdio(false);

    int t=1;
    // cin >> t;
    while(t--)
        soln();
    return 0;
}

/*in
2 7 10
5 6
*/

/*out
1
*/

/*in
1 5 10
7
*/

/*out*
0/

/*in 
3 10 10
5 7 7
*/
/*out
1*/

/*in
1 1 1
1
*/

/*out
0*/