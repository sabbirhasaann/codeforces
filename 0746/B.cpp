// 2026/05/05 06:02:14
// https://codeforces.com/problemset/problem/746/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n;
    string s, r;
    cin >> n >> s;

    for (int i = 0; i < s.length(); ++i)
    {
        if (n % 2 == 1)
            r += s[i];
        else
            r = s[i] + r;
        n--;
    }
    cout << r << endl;
}

void solnEncoding()
{
    /*
    initializing a string of n length
    string t=string(n,'a');
    */
    string s;
    cin >> s;
    int n = s.length();
    int mid = n / 2, i, j;

    if (n & 1)
        i = j = mid;
    else
    {
        i = mid - 1;
        j = mid;
    }

    while (n > 0)
    {
        if (i == j)
        {
            cout << s[j];
            --i;
            ++j;
        }
        else if (n & 1)
        {
            cout << s[j];
            ++j;
        }
        else
        {
            cout << s[i];
            --i;
        }
        --n;
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);

    int t = 1;
    // cin >> t;
    while (t--)
        soln();
    // solnEncoding();
    return 0;
}

/*in
5
logva
*/

/*out
volga
*/

/*in
2
no
*/

/*out
no
*/

/*in
4
abba
*/

/*out
baba
*/