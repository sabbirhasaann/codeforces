// 2026/03/06 14:09:15
// https://codeforces.com/problemset/problem/1901/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n,x,minTank;
    cin >> n >> x;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
        cin >> arr[i];
    minTank = max(arr[0], 2 *(x - arr[n-1]));
    for(int i=1;i<n;++i)
        minTank = max(minTank, arr[i]-arr[i-1]);
    cout << minTank << endl;
}


int main(){
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
        soln();
    return 0;
}