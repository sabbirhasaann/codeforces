// 2026/01/16 06:56:51

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void soln()
{
    vector<int> lucky = {4,7,44,47,74,77,444,447,474,477, 744, 747, 774, 777};
    int n;
    cin >> n;
    for(int x: lucky)
        if(n%x == 0)
        {
            cout << "YES\n";
            return;
        }
    cout << "NO\n";
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t=1;
    // cin >> t;
    while(t--)
        soln();
    return 0;
}