// 2026/03/29 16:24:29
// https://codeforces.com/problemset/problem/1566/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n,s;
    cin >> n >> s;
    n = n - (n+1)/2 + 1;
    cout << s/n << endl;

}


void soln1(){
    long long n, s;
    cin >> n >> s;
    long long L = 0, R = s + 1;
    while (R - L > 1) {
        long long M = (L + R) / 2;
        long long m = n / 2 + 1;
        if (m * M <= s) {
            L = M;
        } else {
            R = M;
        }
    }
    cout << L << '\n';
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
8
1 5
2 5
3 5
2 1
7 17
4 14
1 1000000000
1000000000 1
*/

/*out
5
2
2
0
4
4
1000000000
0
*/