// 2026/02/21 15:42:44
// https://codeforces.com/problemset/problem/337/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n,m,diff = INT_MAX;
    cin >> n >> m;
    vector<int> arr(m);
    for(int i=0;i<m;i++)
        cin >> arr[i];
    
    sort(arr.begin(), arr.end());
    for(int i=0;i< m - n + 1;++i)
        diff = min(diff, (arr[i+n-1]-arr[i]));

    cout << diff << endl;
}


int main(){
    ios_base::sync_with_stdio(false);

    int t=1;
    // cin >> t;
    while(t--)
        soln();
    return 0;
}