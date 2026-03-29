// 2026/03/29 08:52:12
// https://codeforces.com/problemset/problem/1805/A

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
    vector<int> arr(n);
    for(int i=0;i<n;i++)
        cin >> arr[i];
    int ans = arr[0];
    for(int i=1;i<n;++i)
        ans ^= arr[i];
    if(n%2 == 0 && ans !=0)
        cout << -1 << endl;
    else
        cout << ans << endl;
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
3
1 2 5
3
1 2 3
4
0 1 2 3
4
1 2 2 3
1
1
*/

/*out
6
0
3
-1
1
*/