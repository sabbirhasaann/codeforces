// 2026/03/04 16:34:12
// https://codeforces.com/problemset/problem/1878/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    long long n,k,x,leftS,rightS;
    cin >> n >> k >> x;
    leftS = k * (k+1) / 2;
    rightS = (k * (2 * n - k + 1) + 1) / 2; // (k/2) * (2 * (n-k+1) + k - 1);
    // cout << leftS <<" " << rightS << endl;
    if(leftS <= x && x <= rightS)
        YES;
    else
        NO;
}


int main(){
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
        soln();
    return 0;
}