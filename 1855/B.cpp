// 2026/03/13 15:08:28
// https://codeforces.com/problemset/problem/1855/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    long long n;
    cin >> n;
    if(n&1){
        cout << 1 << endl;
        return;
    }
    
    int maxCnt = -1, cnt = 0;
    for(int i=1;i<=100;++i){
        if(n%i == 0)
            ++cnt;
        else
            cnt = 0;
        maxCnt = max(maxCnt, cnt);
    }   
    cout << maxCnt << endl;
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
10
1
40
990990
4204474560
169958913706572972
365988220345828080
387701719537826430
620196883578129853
864802341280805662
1000000000000000000
*/

/*output
1
2
3
6
4
22
3
1
2
2
*/