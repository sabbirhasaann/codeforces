// 2026/03/27 11:09:11
// https://codeforces.com/problemset/problem/2114/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    ll n;
    cin >> n;

    ll l=0,h=100,k=-1;
    while(l<=h){
        ll m = l + (h-l)/2;
    
        if(m*m == n){
            k = m;
            break;
        }

        else if(m*m > n)
            h = m - 1;
        else
            l = m + 1;
        
    }

    if(k==0)
        cout << 0 << " " << 0 << endl;
    else if(k>0)
        cout << 1 <<" " << k-1 << endl;
    else
        cout << k << endl;
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
0001
1001
1000
4900
2025
*/

/*out
0 1
-1
-1
34 36
20 25
*/