// 2026/03/07 00:12:18
// https://codeforces.com/problemset/problem/1283/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int h,m;
    cin >> h >> m;

    cout << 60 - m + 60 * (24 - (h + 1)) << endl;
}

void soln1(){
    int h, m;
    scanf("%d %d", &h, &m);
    printf("%d\n", 1440 - h * 60 - m);
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
23 55
23 0
0 1
4 20
23 59
*/

/*out
5
60
1439
1180
1
*/