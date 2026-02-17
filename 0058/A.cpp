// 2026/02/17 19:27:12
// https://codeforces.com/problemset/problem/58/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define Y cout << "YES\n"
#define N cout << "NO\n"

void soln()
{
    string s,t="hello";
    cin >> s;
    int n = s.length(),i=0;
    int m = t.length(),j=0;

    while(i<n && j<m)
    {
        if(s[i] == t[j]){
            ++i;
            ++j;
        }
        else
            ++i;
    }

    if(j == m)
        Y;
    else
        N;

}


int main(){
    ios_base::sync_with_stdio(false);

    int t=1;
    // cin >> t;
    while(t--)
        soln();
    return 0;
}