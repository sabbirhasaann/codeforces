// https://codeforces.com/problemset/problem/1915/C
#include <bits/stdc++.h>
using namespace std;
void solve();
int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
}

void solve()
{
    long long n,sum=0;
    cin >> n;
    vector<long long>a(n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        sum+=a[i];
    }
        
    long long l = sqrt(sum);
   
    if(sum == l*l)
        cout <<"YES\n";
    else
        cout <<"NO\n";
    
}

/*input
5
1
9
2
14 2
7
1 2 3 4 5 6 7
6
1 3 5 7 9 11
4
2 2 2 2
*/

/*output
YES
YES
NO
YES
NO
*/