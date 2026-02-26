// 2026/02/26 06:32:30
// https://codeforces.com/problemset/problem/1807/D

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'

long long n,a[200005],q,summ=0,pref[200005];

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

void effsoln(){
    
    cin >> n >> q;
    for(int i=1;i<=n;i++){
        cin >> a[i];
        pref[i]=pref[i-1];
        pref[i]+=a[i];
    }
    for(int i = 0; i < q; i++){
        long long l,r,k;
        cin >> l >> r >> k;
        long long ans = pref[n]-(pref[r]-pref[l-1])+k*(r-l+1);
        if(ans%2==1){
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
        // soln();
        effsoln();
    return 0;
}