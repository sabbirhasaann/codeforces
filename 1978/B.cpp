// 2026/03/28 13:20:54
// https://codeforces.com/problemset/problem/1978/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    ll n,a,b,t,ft,ans=0;
    cin >> n >> a >> b;

    if(b>a){
        t = min(n,b-a);
        ft = b-t+1;
        n-=t;
        ans += (t * (2*ft + t - 1))/2;
    }
    ans += n*a;
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
7
4 4 5
5 5 9
10 10 5
5 5 11
1000000000 1000000000 1000000000
1000000000 1000000000 1
1000 1 1000
*/

/*out
17
35
100
45
1000000000000000000
1000000000000000000
500500
*/