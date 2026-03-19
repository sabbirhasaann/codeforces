// 2026/03/19 17:01:30
// https://codeforces.com/problemset/problem/1900/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int mx_cnt = 0,cnt=0,tcnt=0,n;
    cin >> n;

    for(int i=0;i<n;i++){
        char c;
        cin >> c;
        if(c=='.'){
            ++cnt;
            ++tcnt;
            mx_cnt = max(mx_cnt, cnt);
        }
        else
            cnt = 0;

    }
    if(mx_cnt>=3)
        cout << 2 << endl;
    else
        cout << tcnt << endl;
    
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
...
7
##....#
7
..#.#..
4
####
10
#...#..#.#
*/

/*out
2
2
5
0
2
*/