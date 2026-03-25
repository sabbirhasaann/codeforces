// 2026/03/07 15:25:18
// https://codeforces.com/problemset/problem/1985/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n;
    cin >> n;

    if(n/2 == 1)
        cout << n << endl;
    else
        cout << 2 << endl;


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
2
3
15
*/

/*out
3
2
*/