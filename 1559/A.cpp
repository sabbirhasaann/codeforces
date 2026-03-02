// 2026/03/02 06:58:54
// https://codeforces.com/problemset/problem/1559/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n, res = ~0;
    cin >> n;
       
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        res &= x;
    }
    cout << res << endl;
}


int main(){
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
        soln();
    return 0;
}