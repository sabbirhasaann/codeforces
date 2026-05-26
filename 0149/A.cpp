// 2026/02/27 19:29:01
// https://codeforces.com/problemset/problem/149/A

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
    vector<int> arr(12);
    for (int i = 0; i < 12; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end(), greater<>());
    int months = 0;

    int k = 0;
    for (int i = 0; i < 12; ++i)
    {
        if (k >= n)
            break;
        ++months;
        k += arr[i];
    }

    if (k < n)
        cout << -1 << endl;
    else
        cout << months << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);

    int t = 1;
    // cin >> t;
    while (t--)
        soln();
    return 0;
}

/*in
5
1 1 1 1 2 2 3 2 2 1 1 1
*/

/*out
2
*/

/*in
0
0 0 0 0 0 0 0 1 1 2 3 0
*/
/*out
0
*/

/*in
11
1 1 4 1 1 5 1 1 4 1 1 1
*/
/*out
3
*/