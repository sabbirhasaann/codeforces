// 2026/03/11 11:57:41
// https://codeforces.com/problemset/problem/1850/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n,winner,quality=INT_MIN;
    cin >> n;
    for(int i=1;i<=n;++i){
        int a,b;
        cin >> a >> b;
        if(a<=10 && b>quality){
            quality = b;
            winner = i;
        }
    }
    cout << winner << endl;
}


int main(){
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
        soln();
    return 0;
}