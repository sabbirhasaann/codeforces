// 2026/03/21 06:13:13
// https://codeforces.com/problemset/problem/2126/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int x,d = 10;
    cin >> x;
    while(x){
        int dd = x%10;
        x/=10;
        d = min(dd,d);
    }
    cout << d << endl;
}


int main(){
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
        soln();
    return 0;
}

/*in
5
6
96
78
122
696
*/

/*out
6
6
7
1
6
*/