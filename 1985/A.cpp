// 2026/03/06 10:00:04
// https://codeforces.com/problemset/problem/1985/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    string a, b;
    cin >> a >> b;
    swap(a[0], b[0]);
    cout << a << " " << b << endl;
}


int main(){
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
        soln();
    return 0;
}