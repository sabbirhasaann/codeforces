// 2026/03/07 00:50:49
// https://codeforces.com/problemset/problem/1520/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n;
    string s;
    cin >> n >> s;
    vector<bool> visited(26, false);
    for(int i=0;i<n;++i){
        if(!visited[s[i]-'A'])
            visited[s[i]-'A'] = true;
        else if(visited[s[i]-'A'] && s[i] == s[i-1])
            continue;
        else{
            NO;
            return;
        }
    }
    YES;
}

void soln1(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (char c = 'A'; c <= 'Z'; c++) {
        int first = n;
        int last = -1;
        for (int i = 0; i < n; i++) {
            if (s[i] == c) {
                first = min(first, i);
                last = max(last, i);
            }
        }
        for (int i = first; i <= last; i++) {
            if (s[i] != c) {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
}

int main(){
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
        soln();
    return 0;
}