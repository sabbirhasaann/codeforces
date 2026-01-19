// 2026/01/18 20:10:52

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void soln()
{
    int n,maxim;
    cin >>n;
    vector<int> a(n);

    for(int i=0;i<n;i++)
        cin >> a[i];
    maxim = a[0];
    for(int i=0;i<n;i++)
        if(a[i]>maxim)
            maxim = a[i];
    cout << 1LL * maxim * n << endl;

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