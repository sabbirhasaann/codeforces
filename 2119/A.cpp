// 2026/04/03 12:49:27
// https://codeforces.com/problemset/problem/2119/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int a,b,x,y,ans=0;
    cin >> a >> b >> x >> y;
    
    if(a>b){
        a ^= 1;
        if(a==b)
            ans = y;
        else
            ans = -1;
    }
    else{
        while(!(a==b)){
            if(a%2 == 0 && x>y){
                ans += y;
                a^=1;
            }
            else{
                ans += x;
                ++a;
            }
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
7
1 4 1 2
1 5 2 1
3 2 2 1
1 3 2 1
2 1 1 2
3 1 1 2
1 100 10000000 10000000
*/


/*out
3
6
1
3
-1
-1
990000000
*/