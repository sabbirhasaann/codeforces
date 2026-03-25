// 2026/03/07 16:40:06
// https://codeforces.com/problemset/problem/702/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n, ans = 1,cnt=1;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
        cin >> arr[i];
    for(int i=1;i<n;++i){
        if(arr[i-1]<arr[i])
            ++cnt;
        else
            cnt = 1;
        ans = max(ans, cnt);
    }
    cout << ans << endl;
    
}


int main(){
    ios_base::sync_with_stdio(false);

    int t=1;
    // cin >> t;
    while(t--)
        soln();
    return 0;
}

/*i
5
1 7 2 11 15
*/

/*o
3*/

/*i
6
100 100 100 100 100 100
*/

/*o
1*/

/*i
3
1 2 3
*/

/*o
3*/