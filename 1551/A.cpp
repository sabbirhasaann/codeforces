// 2026/03/07 01:06:14
// https://codeforces.com/problemset/problem/1551/A

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

    int c1 = (n+2)/3, c2 = (n/3);    
    if(c1 + 2 * c2 != n)
        swap(c1,c2);
    
    cout << c1 << " " << c2 << endl;
    
    
}


int main(){
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
        soln();
    return 0;
}