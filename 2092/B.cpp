// 2026/02/03 19:34:25

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve() {
    int n; cin >> n;
    string a, b; cin >> a >> b;
    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; ++i) {
        if (i & 1) {
            cnt2 += a[i] == '0';
            cnt1 += b[i] == '0';
        } else {
            cnt1 += a[i] == '0';
            cnt2 += b[i] == '0';
        }
    }
    cout << (cnt1 >= (n + 1) / 2 && cnt2 >= n / 2 ? "Yes" : "No") << '\n';
}

void soln()
{
    int n,odd1=0,even1=0,odd0=0,even0=0;
    cin >> n;
    string a,b;
    cin >> a >> b;

    for(int i=0;i<n;i++)
    {
        if(i%2){
            if(a[i]=='1' )
                ++odd1;
            if(b[i] == '0')
                ++odd0;
        }
        else{
            if(a[i] == '1' )
                ++even1;
            if(b[i] == '0')
                ++even0;
        }
    }

    if(odd1<=even0 && even1 <= odd0)
        cout <<"YES\n";
    else
        cout <<"NO\n";
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