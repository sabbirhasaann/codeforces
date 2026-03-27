// 2026/03/27 10:46:16
// https://codeforces.com/problemset/problem/686/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    long long n,x,dk=0;
    cin >> n >> x;
    while(n--){
        char c;
        long long d;
        cin >> c >> d;
        if(c=='-'){
            if(x>=d)
                x-=d;
            else
                ++dk;
        }
        else
            x+=d;
    }  
    cout << x << " " << dk << endl;
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
5 7
+ 5
- 10
- 20
+ 40
- 20
*/

/*out
22 1
*/

/*in
5 17
- 16
- 2
- 98
+ 100
- 98
*/

/*out
3 2
*/