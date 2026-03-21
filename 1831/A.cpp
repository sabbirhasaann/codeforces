// 2026/03/21 19:13:33
// https://codeforces.com/problemset/problem/1831/A

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
    for(int i=0;i<n;++i){
        int x;
        cin >> x;
        cout << n - x + 1 <<" ";
    }
    cout << endl;
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
5
1 2 4 5 3
2
1 2
1
1
3
3 2 1
4
1 4 3 2
*/