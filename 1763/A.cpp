// 2026/04/03 13:01:34
// https://codeforces.com/problemset/problem/1763/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n,maX=0, miN=-1;
    cin >> n;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        maX |= x;
        miN &= x;
    }
    cout << maX - miN << endl;
        
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
4
3
1 0 1
4
5 5 5 5
5
1 2 3 4 5
7
20 85 100 41 76 49 36
*/

/*out
1
0
7
125
*/