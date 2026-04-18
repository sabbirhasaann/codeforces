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

void soln1(){
    int a, b; cin >> a >> b;
    int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
    set<pair<int, int>> st1, st2;
    for(int j = 0; j < 4; j++){
        st1.insert({x1+dx[j]*a, y1+dy[j]*b});
        st2.insert({x2+dx[j]*a, y2+dy[j]*b});
        st1.insert({x1+dx[j]*b, y1+dy[j]*a});
        st2.insert({x2+dx[j]*b, y2+dy[j]*a});
    }
    int ans = 0;
    for(auto x : st1)
        if(st2.find(x) != st2.end())
            ans++;
    cout << ans << '\n';
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
