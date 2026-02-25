// 2026/02/25 21:38:07
// https://codeforces.com/problemset/problem/742/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    vector<int> lastDigit = {6,8,4,2};
    int n;
    cin >> n;
    if(n==0)
        cout << 1;
    else{
        n %= 4;
        cout << lastDigit[n];
    }        

}


int main(){
    ios_base::sync_with_stdio(false);

    int t=1;
    // cin >> t;
    while(t--)
        soln();
    return 0;
}