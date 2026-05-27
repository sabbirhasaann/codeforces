// 2026/05/27 05:30:16
// https://codeforces.com/problemset/problem/1613/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    string x1, x2;
    int p1, p2;
    cin >> x1 >> p1 >> x2 >> p2;

    while (p1 >= 1 && x1.length() <= 8)
    {
        x1 += '0';
        --p1;
    }
    while (p2 >= 1 && x2.length() <= 8)
    {
        x2 += '0';
        --p2;
    }

    if (x1.length() == x2.length())
    {
        if (p1 > p2)
            cout << ">";
        else if (p1 < p2)
            cout << "<";
        else
        {
            bool is_equal = true;
            int i = 0;
            for (; i < x1.length(); ++i)
            {
                if (x1[i] != x2[i])
                {
                    is_equal = false;
                    break;
                }
            }
            if (is_equal)
                cout << "=";
            else if (x1[i] - '0' > x2[i] - '0')
                cout << ">";
            else
                cout << "<";
        }
    }

    else if (x1.length() > x2.length())
        cout << ">";
    else
        cout << "<";

    cout << endl;
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
5
2 1
19 0
10 2
100 1
1999 0
2 3
1 0
1 0
99 0
1 2
*/

/*out
>
=
<
=
<
*/