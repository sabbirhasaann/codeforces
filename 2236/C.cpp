// 2026/06/12 20:16:30
// https://codeforces.com/problemset/problem/2236/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'

vector<int> opsX(int n, int x)
{
    vector<int> r;
    r.push_back(n);
    while (n)
    {
        n /= x;
        r.push_back(n);
    }
    return r;
}

void printArray(vector<int> &v)
{
    for (int x : v)
        cout << x << " ";
    cout << endl;
}

void soln()
{
    int a, b, x;
    cin >> a >> b >> x;

    vector<int> aa, bb;
    aa = opsX(a, x);
    bb = opsX(b, x);
    // printArray(aa);
    // printArray(bb);

    int minOps = INT_MAX;
    for (int i = 0; i < aa.size(); ++i)
    {
        for (int j = 0; j < bb.size(); ++j)
        {
            int ops = i + j + abs(aa[i] - bb[j]);
            minOps = min(minOps, ops);
        }
    }
    cout << minOps << endl;
    // cout << endl;
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
7
1 2 3
2 3 2
7 3 10
17 3 3
10 10 2
4 7 2
1 6 2
*/

/*out
1
1
2
3
0
2
2
*/