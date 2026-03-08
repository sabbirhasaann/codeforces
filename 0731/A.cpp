// 2026/03/08 19:51:52
// https://codeforces.com/problemset/problem/731/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    string s;
    cin >> s;
    char c='a';
    int rot = 0;
    for(int i=0;i<s.length();++i){
        if(s[i]!=c){
            
            int a = (c -'a') + 1;
            int b = (s[i] - 'a') + 1;
            if(b>a)
                swap(a,b);
            rot+= min(a-b, 26-a+b);
            c = s[i];
        }
    }
    cout << rot << endl;
}


int main(){
    ios_base::sync_with_stdio(false);

    int t=1;
    // cin >> t;
    while(t--)
        soln();
    return 0;
}

// tc
// zeus
// map
// ares
