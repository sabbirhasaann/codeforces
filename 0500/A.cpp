// 2026/02/24 19:26:01
// https://codeforces.com/problemset/problem/500/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n,t;
    bool possible = false;
    cin >> n >> t;
    vector<int> a(n);
    for(int i=1;i<n;++i)
        cin >> a[i];
    
    vector<bool> visited(n, false);
    queue<int> q;

    q.push(1);
    visited[1] = true;

    while (!q.empty())
    {
        int idx = q.front();
        q.pop();
        if(idx == t){
            possible = true;
            break;
        }
        int moveto = idx + a[idx];
        if(moveto <= n && !visited[moveto])
        {
            visited[moveto] = true;
            q.push(moveto);
        }
    }
    
    if(possible)
        YES;
    else
        NO;


}


int main(){
    ios_base::sync_with_stdio(false);

    int t=1;
    // cin >> t;
    while(t--)
        soln();
    return 0;
}