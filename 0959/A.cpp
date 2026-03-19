// 2026/03/07 15:55:29
// https://codeforces.com/problemset/problem/959/A

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

    if(n&1)
        cout << "Ehab\n";
    else
        cout << "Mahmoud\n";
}


int main(){
    ios_base::sync_with_stdio(false);

    int t=1;
    // cin >> t;
    while(t--)
        soln();
    return 0;
}