// 2026/03/07 16:06:58
// https://codeforces.com/problemset/problem/1890/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n;
    cin >> n;
    unordered_map<int,int> f;

    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        ++f[x];
    }

    if(f.size() == 1){
        YES;
        return;
    }
    if(f.size() == 2){
        auto it = f.begin();
        int cnt1 = it->second;
        int cnt2 = next(it)->second;

        if(cnt1 == cnt2 || (cnt1 == n/2 && cnt2 == (n+1)/2) || (cnt1 == (n+1)/2 && cnt2 == n/2)){
            YES;
            return;
        }
        
    }

    NO;
        
    
}


int main(){
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
        soln();
    return 0;
}