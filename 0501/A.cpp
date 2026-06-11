// 2026/06/11 07:05:28
// https://codeforces.com/problemset/problem/501/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int misha = max((3 * a) / 10, a - (a / 250) * c);
    int vasya = max((3 * b) / 10, b - (b / 250) * d);
    if (misha > vasya)
        cout << "Misha" << endl;
    else if (vasya > misha)
        cout << "Vasya\n";
    else
        cout << "Tie\n";
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
500 1000 20 30
*/

/*out
Vasya
*/

/*in
1000 1000 1 1
*/

/*out
Tie
*/

/*in
1500 1000 176 177
*/

/*out
Misha
*/