// 2026/03/27 08:19:05
// https://codeforces.com/problemset/problem/1856/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n,ops=0;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
        cin >> arr[i];
    int i=n-1;
    while(i>0 && arr[i]>=arr[i-1]){
        --i;
    } 
    while(i-1>=0){
        ops = max(ops, arr[i-1]);
        --i;
    } 
    cout << ops << endl;
}

void soln1() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    
    int ans = 0;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            ans = max(ans, a[i]);
        }
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

/*in
7
3
1 2 3
5
2 1 2 1 2
4
3 1 5 4
2
7 7
5
4 1 3 2 5
5
2 3 1 4 5
3
1000000000 1 2
*/

/*out
0
2
5
0
4
3
1000000000
*/