// 2026/03/03 07:36:35
// https://codeforces.com/problemset/problem/1849/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n, k;
    cin >> n >> k;
    vector<pair<int,int>> vp(n);
    for(int i=0; i<n; ++i){
        int x;
        cin >> x;
        vp[i] = {x%k,i+1};
    }
    sort(vp.begin(), vp.end(), [](pair<int,int>&a, pair<int,int> &b){
        
        if (a.first == 0 && b.first != 0) return true; 
        if (a.first != 0 && b.first == 0) return false;
        
        if (a.first == b.first) {
            return a.second < b.second;
        }

        return a.first > b.first;
    });

    for(int i=0;i<n;++i)
        cout << vp[i].second << " ";
    cout << endl;

}


int main(){
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
        soln();
    return 0;
}