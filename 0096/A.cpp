// 2026/02/16 13:48:35
// https://codeforces.com/problemset/problem/96/A
// Single Pass Greedy Approach
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void soln()
{
    string s;
    cin >> s;
    int maxLen = 1,n = s.length();
    for(int i=0;i<n-1;++i)
    {
        int j = i;
        char c = s[j];
        while(j<n && s[j+1]==c)
            ++j;
        maxLen = max(maxLen, j-i + 1);    
        i = j;
    }

    if(maxLen>7)
        cout <<"YES\n";
    else
        cout <<"NO\n";
}


void effsoln() {
    string s;
    cin >> s;
    // if (!(cin >> s)) return;

    int count = 1;
    for (int i = 1; i < s.length(); ++i) {
        if (s[i] == s[i - 1]) {
            count++;
            if (count >= 7) {
                cout << "YES" << endl;
                return; 
            }
        } else {
            count = 1;
        }
    }
    cout << "NO" << endl;
}


int main(){
    ios_base::sync_with_stdio(false);

    int t=1;
    // cin >> t;
    while(t--)
        effsoln();
    return 0;
}