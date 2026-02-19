// 2026/02/19 11:00:16
// https://codeforces.com/problemset/problem/1374/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'

void soln() // time limit execeded - 1s
{
    int n;
    cin >> n;
    
    map<int,int> mp;
    mp[2] = 0;
    mp[3] = 0;

    for(int i=2; i*i <= n; ++i){
        while (n%i == 0 )
        {
            ++mp[i];
            n/=i;
        }
    }

    if(n>1)
        ++mp[n];
    
    auto it = mp.lower_bound(4);
    if(it != mp.end() || mp[2] > mp[3])
    {
        cout << -1 << endl;
        return;
    }

    cout << (mp[3] - mp[2]) + mp[3] << endl;
}


void effsoln(){
    int n;
    cin >> n;
    int cnt2 = 0, cnt3 = 0;
    while (n % 2 == 0) {
        n /= 2;
        ++cnt2;
    }
    while (n % 3 == 0) {
        n /= 3;
        ++cnt3;
    }
    if (n == 1 && cnt2 <= cnt3) {
        cout << 2 * cnt3 - cnt2 << endl;
    } else {
        cout << -1 << endl;
    }
}


int main(){
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
        effsoln();
    return 0;
}