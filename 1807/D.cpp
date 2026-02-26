// 2026/02/26 06:32:30
// https://codeforces.com/problemset/problem/1807/D

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n,q,sum=0;
    cin >> n >> q;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
        sum += arr[i];
    }
    
    vector<int> prefSum(n,0);
    prefSum[0] = arr[0];
    for(int i=1;i<n;++i)
        prefSum[i] = prefSum[i-1] + arr[i];
    while (q--)
    {
        int l,r,k,newSum=0,rangeSum=0,len;
        cin >> l >> r >> k;
        --l;
        --r;
        rangeSum = (l==0)? prefSum[r] : (prefSum[r] - prefSum[l-1]);
        newSum = sum - rangeSum + (r-l+1) * k;
        
        if(newSum&1)
            YES;
        else
            NO;
    }
    
}


int main(){
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
        soln();
    return 0;
}