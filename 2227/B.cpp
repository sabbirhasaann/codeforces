// 2026/04/30 19:42:59
// https://codeforces.com/problemset/problem/2227/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n, l = 0, r = 0;
    cin >> n;
    for(int i=0;i<n;++i){
        char c;
        cin >> c;
        if(c=='(')
            ++l;
        else
            ++r;
    }

    if(l!=r)
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