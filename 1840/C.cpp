// 2026/02/27 14:32:27
// https://codeforces.com/problemset/problem/1840/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    long long n,k,q,ways = 0, cnt = 0;
    cin >> n >> k >> q;
    vector<int> a(n);
    for(int &x: a)
        cin >> x;
    
    for(int i=0;i<n;++i){
        if(a[i] <= q)
            ++cnt;
        
        else{
        
            if(cnt>=k){
                long long l = cnt - k + 1;
                ways += (l * (l+1)) / 2;
            }
            cnt = 0;
        }
        
    }
    if(cnt>=k){
        long long l = cnt - k + 1;
        ways += (l * (l+1)) / 2;
    }
    
    cout << ways << endl;
    
}



int main(){
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
        soln();
    return 0;
}