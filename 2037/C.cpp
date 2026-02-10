// 2026/02/10 11:16:51
// https://codeforces.com/problemset/problem/2037/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

// bridge the gap

void soln()
{
    int n;
    cin >> n;

    if(n <= 4){
        cout << -1 << endl;
        return;
    }
        
    for(int i=2;i<=n;i+=2)
        if(i != 4)
            cout << i <<" ";
    
    cout << 4 <<" " << 5 <<" ";

    for(int i=1;i<=n;i+=2)
        if(i != 5)
            cout << i <<" ";


    cout << endl;

}


int main(){
    ios_base::sync_with_stdio(false);
    
    int t;
    cin >> t;
    while(t--)
        soln();
    return 0;
}