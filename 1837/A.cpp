// 2026/03/08 19:40:57
// https://codeforces.com/problemset/problem/1837/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int x,k;
    cin >> x >> k;
    if(x%k==0){
        cout << 2 << endl;
        cout << x - 1 << " " << 1 << endl;
    }
    else{
        cout << 1 << endl;
        cout << x << endl;
    }   
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
10 2
10 3
3 4
*/

/*output
2
9 1
1
10
1
3
*/