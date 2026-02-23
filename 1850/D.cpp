// 2026/02/23 19:25:51
// https://codeforces.com/problemset/problem/1850/D

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n,k,maxSubArray=0,subArray=0;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end());
    for(int i=1;i<n;++i){
        if(arr[i]-arr[i-1] > k)
            subArray = 0;
        else
            ++subArray;
        maxSubArray = max(maxSubArray, subArray);
    }
    cout << n - maxSubArray - 1 << endl;
    
}


int main(){
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
        soln();
    return 0;
}