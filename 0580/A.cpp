// 2026/02/18 12:05:15
// https://codeforces.com/problemset/problem/580/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int maxim = 1,cnt = 1;
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
        cin >> arr[i];
    for(int i=0;i<n-1;++i){
        if(arr[i]<=arr[i+1])
            maxim = max(maxim, ++cnt);
        else
            cnt = 1;
    }
    cout << maxim << endl;
}


int main(){
    ios_base::sync_with_stdio(false);

    int t=1;
    // cin >> t;
    while(t--)
        soln();
    return 0;
}