// 2026/03/02 06:39:31
// https://codeforces.com/problemset/problem/450/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n,m,maxFreq=INT_MIN,idx=1;
    cin >> n >> m;
    for(int i=0;i<n;++i){
        int x,freq;
        cin >> x;
        freq = (x+m-1)/m;
        if(freq>=maxFreq)
        {
            maxFreq = freq;
            idx = i+1;
        }   
    }
    cout << idx;
}


int main(){
    ios_base::sync_with_stdio(false);

    int t=1;
    // cin >> t;
    while(t--)
        soln();
    return 0;
}