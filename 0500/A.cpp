// 2026/02/24 19:26:01
// https://codeforces.com/problemset/problem/500/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'

const int N_ = 30500;
int N, T, A[N_];

int b[1234567];



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

void soln1(){
    cin >> N >> T;
    for(int i = 1; i < N; i++) {
        cin >> A[i];
    }
    A[N] = 1;
    for(int cur = 1; cur <= N; cur += A[cur]) {
        if(cur == T){
            cout << "YES";
            return;
        } 
    }
    
    cout << "NO";
}

void soln2(){
    int n, t;
    cin >> n >> t;
    for (int i = 1; i < n; i++) {
        cin >> b[i];
    }
    int x = 1;
    while (x < t) {
        x += b[x];
    }
    x == t ? cout << "YES" : cout << "NO";
}


int main(){
    ios_base::sync_with_stdio(false);

    int t=1;
    // cin >> t;
    while(t--)
        // soln();
        soln1();
        // soln2();

    return 0;
}