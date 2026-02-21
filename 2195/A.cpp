// 2026/02/15 20:00:58
// https://codeforces.com/problemset/problem/2195/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void soln()
{
    int n;
    bool one = false, sixS = false;
    cin >> n;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        if(x == 1)
            one = true;
        if(x == 67)
            sixS = true;
    }

    if(one == true && sixS == true)
        cout << "YES\n";
    else if(sixS)
        cout <<"YES\n";
    else
        cout <<"NO\n";
    
}


int main(){
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
        soln();
    return 0;
}