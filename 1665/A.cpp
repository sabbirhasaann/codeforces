// 2026/03/27 08:12:00
// https://codeforces.com/problemset/problem/1665/A

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
    cout << n-3 << " " << 1 <<" " << 1 <<" " <<1 << endl;
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
4
7
8
9
10
*/

/*out
1 1 1 1
2 2 2 1
2 2 2 2
2 4 2 1
3 5 1 1
*/