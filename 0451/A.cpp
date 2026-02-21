// 2026/02/21 18:28:44
// https://codeforces.com/problemset/problem/451/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'

int moves(int n,int m){
    if(n == 0 || m == 0)
        return 1;
    return 1 + min(moves(n-1,m), moves(n,m-1));
    cout << endl;
}

void soln()
{
    int n,m;
    cin >> n >> m;
    if(min(n,m)&1)
        cout << "Akshat\n";
    else
        cout <<"Malvika\n";
}


int main(){
    ios_base::sync_with_stdio(false);

    int t=1;
    // cin >> t;
    while(t--)
        soln();
    return 0;
}