#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void soln()
{
    int a,b;
    cin >> a >> b;
    set<int> res;
    res.insert(b);
    while(b>a && (b%2==0 || (b-1)%10==0)){
        if(b%2)
            b = (b-1) / 10;
        else
            b /= 2;
        res.insert(b);
        // cout << b <<" ";
    }


    if(b == a){
        res.insert(a);
        cout <<"YES\n";
        cout << res.size() <<"\n";
        for(int x: res)
            cout << x <<" ";
    }
    else
        cout << "NO\n";

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    // cin >> t;
    while(t--)
        soln();
    return 0;
}