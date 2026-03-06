// 2026/03/06 15:25:59
// https://codeforces.com/problemset/problem/492/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n,h=1,x=1,sum=1;
    cin >> n;
    
    while (sum<=n)
    {
        x = x + h + 1;
        sum += x;
        ++h;
    }
    cout << h-1 << endl;
}


int main(){
    ios_base::sync_with_stdio(false);

    int t=1;
    // cin >> t;
    while(t--)
        soln();
    return 0;
}