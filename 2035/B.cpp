// 2026/02/13 15:09:12
// https://codeforces.com/problemset/problem/2035/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void soln()
{
    int n;
    cin >> n;

    if(n==2)
    {
        cout << 66 << endl;
        return;
    }
    if(n==1 || n==3)
    {
        cout << -1 << endl;
        return;
    }

    string s, s1 = "3366", s2="6366";
    for(int i=1;i<=n-4;++i)
        s+='3';
    if(n&1)
        s += s2;
    else
        s += s1;
    cout << s << endl;

}


int main(){
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
        soln();
    return 0;
}