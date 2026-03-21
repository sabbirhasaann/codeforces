// 2026/03/21 12:12:19
// https://codeforces.com/problemset/problem/1311/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int a,b,ans=0;
    cin >> a >> b;

    int diff = b - a;
    if(diff==0)
        ans = 0;
    else if(diff>0){
        if(diff&1)
            ans = 1;
        else
            ans = 2;
    }
    else{
        diff = ~diff + 1;
        if(diff&1)
            ans = 2;
        else
            ans = 1;
    }
    
    cout << ans << endl;
    
}



int main(){
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
        soln();
    return 0;
}

/*in
5
2 3
10 10
2 4
7 4
9 3
*/