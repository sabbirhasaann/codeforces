// 2026/03/14 10:01:48
// https://codeforces.com/problemset/problem/1941/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n,m,k,cnt=0;
    cin >> n >> m >> k;
    vector<int> b(n), c(m);
    for(int i=0;i<n;++i)
        cin >> b[i];
    for(int i=0;i<m;++i)
        cin >> c[i];
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            if(b[i]+c[j]<=k)
                ++cnt;
        }
    }
    cout << cnt << endl;
    
}


int main(){
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
        soln();
    return 0;
}

/*input
4
4 4 8
1 5 10 14
2 1 8 1
2 3 4
4 8
1 2 3
4 2 7
1 1 1 1
2 7
3 4 2000
1 1 1
1 1 1 1
*/

/*output
6
0
4
12
*/