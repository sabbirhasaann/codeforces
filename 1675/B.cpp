// 2026/04/16 06:58:41
// https://codeforces.com/problemset/problem/1675/B

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
    int ans = 0;

    for(int i=n-2;i>=0;--i){
        if(arr[i]>=arr[i+1]){
            while(arr[i] != 0 && arr[i] >= arr[i+1]){
                ++ans;
                arr[i]/=2;
            }
            if(arr[i] == arr[i+1]){ // optimized
                ans = -1;
                break;
            }
        }
    }
 
    // for(int i=0;i<n-1;++i){
    //     if(arr[i] == arr[i+1]){
    //         ans = -1;
    //         break;
    //     }
    // }
    
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
3 6 5
4
5 3 2 1
5
1 2 3 4 5
1
1000000000
4
2 8 7 5
5
8 26 5 21 10
2
5 14
*/

/*out
2
-1
0
0
4
11
0
*/