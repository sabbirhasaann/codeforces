// 2026/03/25 17:55:44
// https://codeforces.com/problemset/problem/1368/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    long long a,b,n, ops=0;
    cin >> a >> b >> n;
    while(!(a>n) && !(b>n)){
        if(a>b)
            b+=a;
        else
            a+=b;
        ++ops;
    }
    cout << ops << endl;
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
2
1 2 3
5 4 100
*/

/*out
2
7
*/