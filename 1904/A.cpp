// 2026/04/17 05:42:11
// https://codeforces.com/problemset/problem/1904/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int a,b;
    pair<int,int> k,q;
    
    cin >> a >> b >> k.first >> k.second >> q.first >> q.second;
    set<pair<int,int>> ks, qs;
    
    int dx[] = {b, b, -b, -b, a, a, -a, -a};
    int dy[] = {a, -a, a, -a, b, -b, b, -b};
    
    for(int i=0;i<8;++i){
        ks.insert({k.first + dx[i], k.second + dy[i]});
        qs.insert({q.first + dx[i], q.second + dy[i]});
    }
    
    set<pair<int,int>> res;
    set_intersection(ks.begin(), ks.end(), qs.begin(), qs.end(), inserter(res, res.begin()));
    
    cout << res.size() << endl;
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
4
2 1
0 0
3 3
1 1
3 1
1 3
4 4
0 0
8 0
4 2
1 4
3 4
*/

/*out
2
1
2
0
*/
