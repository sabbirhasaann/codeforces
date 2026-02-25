// 2026/02/25 22:02:13
// https://codeforces.com/problemset/problem/1343/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n, sum = 1;
    cin >> n;
    for(int i=1;i<32;++i){
        
        sum = (sum << 1 | 1);       
        if(n%sum == 0)
        {
            cout << n/sum << endl;
            break;
        }
    }
}


int main(){
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
        soln();
    return 0;
}