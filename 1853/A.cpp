// 2026/03/07 19:55:20
// https://codeforces.com/problemset/problem/1853/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n, ans=INT_MAX;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
        cin >> arr[i];
    for(int i=1;i<n;++i)
    {
        if(arr[i-1]>arr[i]){
            ans = 0;
            break;
        }
        ans = min(ans, (arr[i]-arr[i-1]+2)/2);
    }
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

/*input
4
2
1 1
4
1 8 10 13
3
1 3 2
3
1 9 14
*/

/*output
1
2
0
3
*/