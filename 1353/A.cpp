// 2026/03/26 15:35:57
// https://codeforces.com/problemset/problem/1353/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n,m;
    cin >> n >> m;
    
    switch(n){
        case 1:
            cout << 0 << endl;
            break;
        case 2:
            cout << m << endl;
            break;
        default:
            cout << 2 * m << endl;
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

/*in
5
1 100
2 2
5 5
2 1000000000
1000000000 1000000000
*/

/*out
0
2
10
1000000000
2000000000
*/