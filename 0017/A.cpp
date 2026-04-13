// 2026/02/10 12:47:07
// https://codeforces.com/problemset/problem/17/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void soln()
{
    int n,k;
    cin >> n >> k;
    
    if(k==0)
    {
        cout << "YES\n";
        return;
    }

    vector<bool> prime(n+1, true);
    vector<int> primes;
    prime[0] = prime[1] = false;
    for(int i=2;i*i<=n;i++){
        if(prime[i])
            for(int j=i*i; j <= n; j+=i)
                prime[j] = false;
    }

    for(int i=2;i<=n;i++)
        if(prime[i])
            primes.push_back(i);
    for(int i=0;i<primes.size()-1;i++){
        int idx = primes[i] + primes[i+1] + 1;
        if(idx <= n && prime[idx])
            --k;
    }
    if(k==0)
        cout << "YES\n";
    else
        cout << "NO\n";
    

}


int main(){
    ios_base::sync_with_stdio(false);

    int t=1;
    // cin >> t;
    while(t--)
        soln();
    return 0;
}