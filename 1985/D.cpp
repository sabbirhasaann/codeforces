// 2026/04/16 09:41:20
// https://codeforces.com/problemset/problem/1985/D

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define secondES cout << "secondES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n,m;
    cin >> n >> m;
    pair<int,int> top,right,left,bottom;
    bool first = true;

    for(int i=1;i<=n;++i){
        for(int j=1;j<=m;++j){
            char c;
            cin >> c;
            if(c == '#'){
                if(first){
                    top.first = right.first = left.first = bottom.first = i;
                    top.second = right.second = left.second = bottom.second = j;
                    first = !first;
                }
                else{
                    if(j < left.second){
                        left.first = i;
                        left.second = j;
                    }
                    if(j > right.second){
                        right.first = i;
                        right.second = j;
                    }
                    if(j == bottom.second && i > bottom.first)
                        bottom.first = i;
                }
            }
        }
    }

    if((top.first == bottom.first && top.second == bottom.second)   && (left.first == right.first && left.second == right.second) && (top.first == left.first && top.second == left.second))
        cout << top.first << " " << top.second << endl;
    
    else if(top.first == bottom.first && top.second == bottom.second)
        cout << left.first <<" " << (left.second + right.second) / 2 << endl;
    
    else if(left.first == right.first && left.second == right.second)
        cout << (top.first + bottom.first) / 2 <<" " << top.second << endl;
    
    
    else
        cout << (top.first + bottom.first) / 2 <<" " << (left.second + right.second) / 2 << endl;
    
}   

void soln1(){
    int n, m; cin >> n >> m;
    vector<vector<char>> g(n, vector<char>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> g[i][j];
        }
    }
    pair<int, int> top = {INF, INF}, bottom = {-INF, -INF};
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(g[i][j] == '#'){
                top = min(top, {i, j});
                bottom = max(bottom, {i, j});
            }
        }
    }
    assert(top.second == bottom.second);
    cout << (top.first + bottom.first) / 2 + 1 << " " << top.second + 1 << endl;
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
6
5 5
.....
.....
..#..
.....
.....
5 5
..#..
.###.
#####
.###.
..#..
5 6
......
......
.#....
###...
.#....
1 1
#
5 6
...#..
..###.
.#####
..###.
...#..
2 10
..........
...#......
*/

/*out
3 3
3 3
4 2
1 1
3 4
2 4
*/