// 2026/03/16 18:52:24
// https://codeforces.com/problemset/problem/1980/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    vector<int> freq(7,0);
    int n,m,cnt=0;
    cin >> n >> m;
    for(int i=0;i<n;++i){
        char c;
        cin >> c;
        ++freq[int(c-'A')];
    }

    for(int i=0;i<7;++i){
        if(freq[i]<m)
            cnt += (m-freq[i]);
        
    }
    cout << cnt << endl;
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
3
10 1
BGECDCBDED
10 2
BGECDCBDED
9 1
BBCDEFFGG
*/

/*output
2
5
1
*/