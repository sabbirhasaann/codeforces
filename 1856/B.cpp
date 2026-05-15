// 2026/05/11 20:33:22
// https://codeforces.com/problemset/problem/1856/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n, ones = 0;
    long long sum = 0;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        sum += x;
        if (x == 1)
            ++ones;
    }
    if (n > 1 && sum >= (long long)n + ones)
        YES;
    else
        NO;
}

int main()
{
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--)
        soln();
    return 0;
}

/*in
6
3
6 1 2
2
1 1
4
3 1 2 4
1
17
5
1 2 1 1 1
3
618343152 819343431 1000000000
*/

/*out
YES
NO
YES
NO
NO
YES
*/

/*in
6
1 14 1 1 1 1
*/