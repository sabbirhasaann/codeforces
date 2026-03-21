// 2026/03/21 12:01:30
// https://codeforces.com/problemset/problem/2148/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int x,n;
    cin >> x >> n;
    if(n&1)
        cout << x << endl;
    else  
        cout << 0 << endl;

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
1 4
2 5
3 6
4 7
*/