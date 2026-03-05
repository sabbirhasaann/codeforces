// 2026/03/05 09:17:35
// https://codeforces.com/problemset/problem/1999/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int a,b,c,d, ways = 0;
    cin >> a >> b >> c >> d;
    if((a>c && b>d) || (a>c && b==d) || (a==c && b>d))
        ways+=2;
    if((b>c && a>d) || (b>c && a==d) || (b==c && a>d))
        ways+=2;
    
    cout << ways << endl;

}


int main(){
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
        soln();
    return 0;
}