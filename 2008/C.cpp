// 2026/03/27 14:44:19
// https://codeforces.com/problemset/problem/2008/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int l,r,i=1,cnt=0;
    cin >> l >> r;
    while(l<=r){
        ++cnt;
        l+=i;
        ++i;
    }
    cout << cnt << endl;
}


int main(){
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
        soln();
    return 0;
}

/*
5
1 2
1 5
2 2
10 20
1 1000000000
*/

/*out
2
3
1
5
44721
*/