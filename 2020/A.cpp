// 2026/04/03 12:59:42
// https://codeforces.com/problemset/problem/2020/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n,k,ans=0;
    cin >> n >> k;
    
    if(k==1)
        ans = n;
    else{
        while(n){
            ans += n%k;
            n/=k;
        }
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
6
5 2
3 5
16 4
100 3
6492 10
10 1
*/

/*out
2
3
1
4
21
10
*/