// 2026/03/26 14:57:22
// https://codeforces.com/problemset/problem/1472/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int w,h,n,ans = 1;
    cin >> w >> h >> n;

    while (w%2 == 0 || h%2 == 0)
    {
        if(w%2==0){
            ans *= 2;
            w/=2;
            continue;
        }
        if(h%2==0){
            ans *= 2;
            h/=2;
        }
    }
    if(ans>=n)
        YES;
    else
        NO;
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
2 2 3
3 3 2
5 10 2
11 13 1
1 4 4
*/

/*out
YES
NO
YES
YES
YES
*/