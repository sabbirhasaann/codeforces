// 2026/03/26 15:47:25
// https://codeforces.com/problemset/problem/1834/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n,ans=0,one=0,none=0,d=0;
    cin >> n;
    for(int i=0;i<n;++i){
        int x;
        cin >> x;
        if(x==-1)
            ++none;
        else
            ++one;
    }

    
    while(!(one >= none)){
        ++one;
        --none;
        ++ans;
    }

    if(none &1)
        ++ans;

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
7
4
-1 -1 1 -1
5
-1 -1 -1 1 1
4
-1 1 -1 1
3
-1 -1 -1
5
1 1 1 1 1
1
-1
2
-1 -1
*/

/*out
1
1
0
3
0
1
2
*/