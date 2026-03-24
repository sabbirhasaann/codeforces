// 2026/03/24 19:24:52
// https://codeforces.com/problemset/problem/1881/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n,m,ans=0;
    string sn,sm;
    cin >> n >> m >> sn >> sm;

    if(sn.find(sm) != string::npos){
        cout << ans << endl;
        return;
    }
    else{
        for(int i=1;i<=6;++i){
            sn += sn;
            if(sn.find(sm) != string::npos){
                cout << i << endl;
                return;
            }
        }
    }
    cout << -1 << endl;
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
12
1 5
a
aaaaa
5 5
eforc
force
2 5
ab
ababa
3 5
aba
ababa
4 3
babb
bbb
5 1
aaaaa
a
4 2
aabb
ba
2 8
bk
kbkbkbkb
12 2
fjdgmujlcont
tf
2 2
aa
aa
3 5
abb
babba
1 19
m
mmmmmmmmmmmmmmmmmmm
*/

/*out
3
1
2
-1
1
0
1
3
1
0
2
5
*/