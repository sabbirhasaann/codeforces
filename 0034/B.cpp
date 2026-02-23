// 2026/02/23 12:28:11
// https://codeforces.com/problemset/problem/34/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n,m,sum=0;
    cin >> n >> m;
    vector<int> a(n);
    for(int i=0;i<n;++i)
        cin >> a[i];
    sort(a.begin(), a.end());
    int i = 0;
    while(i<n && a[i]<=0 && m)
    {
        sum += abs(a[i]);
        ++i;
        --m;
    }    
    cout << sum << endl;
}


int main(){
    ios_base::sync_with_stdio(false);

    int t=1;
    // cin >> t;
    while(t--)
        soln();
    return 0;
}