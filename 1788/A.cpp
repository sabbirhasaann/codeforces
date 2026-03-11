// 2026/03/11 11:41:42
// https://codeforces.com/problemset/problem/1788/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    vector<int> idx={1};
    int n;
    cin >> n;
    for(int i=1;i<=n;++i){
        int x;
        cin >> x;
        if(x==2)
            idx.push_back(i);
    }

    int len = idx.size();
    if(len&1){
        cout << idx[len/2] << endl;
        return;
    }
    

    cout << -1 << endl;
    

}


int main(){
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
        soln();
    return 0;
}