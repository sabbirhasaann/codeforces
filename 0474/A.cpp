// 2026/02/26 07:41:49
// https://codeforces.com/problemset/problem/474/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    vector<vector<char>> keys = {
        {'q','w','e','r','t','y','u','i','o','p'},
        {'a','s','d','f','g','h','j','k','l',';'},
        {'z','x','c','v','b','n','m',',','.','/'}
    };
    unordered_map<char,pair<int,int>> keyboard;
    string s;
    char ch;
    cin >> ch >> s;
    int n = s.length();
    int dir = (ch=='R') ? -1 : 1;

    for(int i=0;i<keys.size();++i)
        for(int j=0;j<keys[0].size();++j)
            keyboard[keys[i][j]] = {i,j};
            
    for(int i=0;i<n;++i){
        pair<int,int> p = keyboard[s[i]];
        cout << keys[p.first][p.second + dir];
    }
}


int main(){
    ios_base::sync_with_stdio(false);

    int t=1;
    // cin >> t;
    while(t--)
        soln();
    return 0;
}