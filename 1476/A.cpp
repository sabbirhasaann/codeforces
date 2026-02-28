// 2026/02/28 06:53:07
// https://codeforces.com/problemset/problem/1476/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    long long n,k;
    cin >> n >> k;
    
    long long ans=-1,l = n, h = n + k - 1,multiple=0;
    while (l<=h)
    {
        long long m = l + (h - l) / 2;
        if((m/k) > (n-1)/k){
            ans = m;
            h = m - 1;
        }
        else
            l = m + 1;
    }
    
    if(ans != -1){
        multiple = (ans/k) * k < n ? ((ans / k) + 1) * k :  (ans / k) * k;
    }
    // cout << multiple << endl;
    cout << (n + multiple -1) / n << endl;
}

void effsoln(){
    long long n, k;
    cin >> n >> k;
    
    long long cf = (n + k - 1) / k;
    k *= cf;
    
    cout << (k + n - 1) / n << endl;
}


int main(){
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
        soln();
    return 0;
}