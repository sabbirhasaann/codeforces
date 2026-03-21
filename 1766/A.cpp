// 2026/03/21 20:29:40
// https://codeforces.com/problemset/problem/1776/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n,ld=-1,len=0;
    cin >> n;
    while(n){
        ld = n%10;
        n/=10;
        ++len;
    }
    cout << ld + (len-1) * 9 << endl;
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
9
42
13
100
111
*/