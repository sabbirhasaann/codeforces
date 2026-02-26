// 2026/02/26 06:00:22
// https://codeforces.com/problemset/problem/476/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n,m,move;
    cin >> n >> m;
    if(n==m){
        cout << n;
        return;
    }
    move = (n+2-1)/2;
    int i = 0, j = move;
    while (i<j)
    {
        if(move % m == 0){
            cout << move;
            return;
        }
        else
            ++move;
        ++i;
    }
    cout << -1;

}


int main(){
    ios_base::sync_with_stdio(false);

    int t=1;
    // cin >> t;
    while(t--)
        soln();
    return 0;
}