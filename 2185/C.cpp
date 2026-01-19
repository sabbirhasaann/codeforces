// 2026/01/18 20:10:56

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void soln()
{
    int n,ans = 1, curr=1;
    cin >>n;
    vector<int> a(n);

    for(int i=0;i<n;i++)
        cin >> a[i];

    sort(a.begin(), a.end());
    
    for(int i=0;i<n-1;i++)
    {
        if(a[i]==a[i+1])
            continue;
        if(a[i]+1 == a[i+1])
            curr++;
        else
            curr = 1;
        ans = max(ans,curr);
    }
    cout << ans <<"\n";
    

    
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while(t--)
        soln();
    return 0;
}