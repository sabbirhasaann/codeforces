// 2026/02/18 12:19:58
// https://codeforces.com/problemset/problem/230/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'

bool sortCondition(pair<int,int> &a, pair<int,int>&b){
    return (a.first < b.first);
}

void soln()
{
    int s,n;
    cin >> s >> n;
    vector<pair<int,int>> vp(n);
    for(int i=0;i<n;++i)
        cin >> vp[i].first >> vp[i].second;
    sort(vp.begin(), vp.end(), sortCondition);
    for(auto i: vp)
    {
        if(s <= i.first)
        {
            NO;
            return;
        }
        s += i.second;
    }

    YES;
    
}


int main(){
    ios_base::sync_with_stdio(false);

    int t=1;
    // cin >> t;
    while(t--)
        soln();
    return 0;
}