// 2026/03/06 08:57:28
// https://codeforces.com/problemset/problem/1899/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n;
    cin >> n;
    if((n-1)%3 == 0 || (n+1) %3 == 0)
        cout <<"First\n";
    else
        cout <<"Second\n";
}


int main(){
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
        soln();
    return 0;
}