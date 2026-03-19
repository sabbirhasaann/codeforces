// 2026/03/07 01:52:28
// https://codeforces.com/problemset/problem/749/A

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
    bool odd = false;
    if(n&1){
        n-=3;
        odd = true;
    }
    
    int len = n/2;

    if(odd)
        cout << len + 1 << endl;
    else
        cout << len << endl;

    for(int i=1;i<=len;++i)
        cout << 2 << " ";
    if(odd)
        cout << 3 << endl;

}


int main(){
    ios_base::sync_with_stdio(false);

    int t=1;
    // cin >> t;
    while(t--)
        soln();
    return 0;
}

/*in
5
*/

/*out
2
2 3
*/

/*in
6*/

/*out
3
2 2 2
*/