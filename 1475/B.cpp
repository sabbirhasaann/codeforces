// 2026/02/23 19:37:38
// https://codeforces.com/problemset/problem/1475/B

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

    if (n % 2020 <= n / 2020) {
        cout << "YES" << endl;
    } 
    else {
        cout << "NO" << endl;
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

/*Input
5
1
4041
4042
8081
8079
*/

/*Output
NO
YES
YES
YES
NO
*/