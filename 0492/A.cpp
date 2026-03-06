// 2026/03/06 15:25:59
// https://codeforces.com/problemset/problem/492/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n,h=1,x=1,sum=1;
    cin >> n;
    
    while (sum<=n)
    {
        x = x + h + 1;
        sum += x;
        ++h;
    }
    cout << h-1 << endl;
}

void effsoln() {
    long long n;
    cin >> n;
    long long low = 0, high = 2000000; // cbrt(6 * 10^18) is approx 1.8M
    long long ans = 0;

    while (low <= high) {
        long long h = low + (high - low) / 2;
        // Using __int128 to prevent overflow during the multiplication
        unsigned __int128 total = (unsigned __int128)h * (h + 1) * (h + 2) / 6;
        
        if (total <= (unsigned __int128)n) {
            ans = h;
            low = h + 1;
        } else {
            high = h - 1;
        }
    }
    cout << ans << endl;
}


int main(){
    ios_base::sync_with_stdio(false);

    int t=1;
    // cin >> t;
    while(t--)
        // soln();
        effsoln();
    return 0;
}