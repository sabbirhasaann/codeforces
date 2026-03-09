// 2026/03/09 18:53:07
// https://codeforces.com/problemset/problem/2207/A

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

    int one=0,maxOne=0;
    for(int i=0;i<n;++i)
        if(s[i]=='1')
            ++one;
    for(int i=1;i<n-1;++i){
        if(s[i-1]=='1' && s[i+1]=='1' && s[i]=='0'){
            ++one;
            s[i] = '1';
        }
    }
    maxOne = one;
    for(int i=1;i<n-1;++i){
        if(s[i-1]=='1' && s[i+1]=='1' && s[i]=='1'){
            --one;
            s[i] = '0';
        }
    }

    cout << one << " " << maxOne << endl;


}


int main(){
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
        soln();
    return 0;
}