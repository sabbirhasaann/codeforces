// 2026/02/07 16:44:28

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void soln()
{
    int n,q;
    cin >> n >> q;
    vector<int> a(n),b(n),prefS(n, 0);

    for(int i=0;i<n;i++)
        cin >> a[i];
    
    for(int i=0;i<n;i++)
        cin >> b[i];
    
    for(int i=0;i<n;i++)
        a[i] = max(a[i], b[i]);
    
    for(int i=n-1;i>0;i--)
        a[i-1] = max(a[i], a[i-1]);
    

    prefS[0] = a[0];

    for (int i = 1; i < n; i++)
        prefS[i] = prefS[i - 1] + a[i];

    for (int i = 0; i < q; i++)
    {
        int l,r;
        cin >> l >> r;
        --l;
        --r;
        if (l == 0)
            cout << prefS[r] << " ";
        else
            cout << prefS[r] - prefS[l - 1] << " ";
    }
    cout << endl;
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