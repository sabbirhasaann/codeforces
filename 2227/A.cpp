// 2026/04/30 19:42:54
// https://codeforces.com/problemset/problem/2227/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int x,y;
    cin >> x >> y;
    if(x%2 == 1 && y%2 == 1)
        NO;
    else
        YES;
}

int main()
{
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--)
        soln();
    return 0;
}