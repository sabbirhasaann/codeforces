// 2026/04/10 20:24:37
// https://codeforces.com/problemset/problem/1688/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int even = 0, ans = 0, n, cntE=INT_MAX;
    cin >> n;
    for(int i=0;i<n;++i){
        int x;
        cin >>x;

        if(x%2 == 0){
            ++even;
            int cnt = 0;
            while(x%2 == 0){
                ++cnt;
                x>>=1;
            }
            cntE = min(cntE, cnt);
        }
    }
    if(even != n)
        cout << even << endl;
    else
        cout << cntE + even - 1 << endl;
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
2
1 9
3
1 1 2
3
2 4 8
3
1049600 33792 1280
*/

/*out
0
1
3
10
*/