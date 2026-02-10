// 2026/02/10 09:23:11
// https://codeforces.com/problemset/problem/2093/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void soln()
{
    long long x,k;
    cin >> x >> k;

    if(k==2 && x == 1)
    {
        cout << "YES\n";
        return;
    }


    if(k>1 || x == 1)
    {
        cout << "NO\n";
        return;
    }

  
    if (x == 2 || x == 3)
    {
        cout << "YES\n";
        return;
    }

    if (x % 2 == 0 || x % 3 == 0)
    {
        cout << "NO\n";
        return;
    }
    
    for (int i = 5; i * i<=x; i = i + 6){
        if (x % i == 0 || x % (i + 2) == 0)
        {
            cout << "NO\n";
            return;   
        }
    }

    cout << "YES\n";
}


int main(){
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
        soln();
    return 0;
}