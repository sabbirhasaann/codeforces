// 2026/03/04 16:00:33
// https://codeforces.com/problemset/problem/1883/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n, k;
    string s;

    cin >> n >> k >> s;

    vector<int> f(26, 0);
    for (int i = 0; i < n; ++i)
        f[s[i] - 'a']++;

    for (int i = 0; i < 26; ++i)
    {
        if (f[i] % 2 == 1 && k > 0)
        {
            f[i]--;
            k--;
        }
    }

    int odds = 0;
    for (int i = 0; i < 26; ++i)
        if (f[i] % 2 == 1)
            odds++;
    if (odds > 1)
        NO;
    else
        YES;
}

void soln1()
{
    int n, k;
    string s;

    cin >> n >> k >> s;

    vector<int> f(26);

    for (char c : s)
        f[c - 'a']++;

    int odd = 0;

    for (int x : f)
        odd += x % 2;

    if (odd <= k + 1)
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
        // soln();
        soln1();
    return 0;
}

/*
Test Case
14
1 0
a
2 0
ab
2 1
ba
3 1
abb
3 2
abc
6 2
bacacd
6 2
fagbza
6 2
zwaafa
7 2
taagaak
14 3
ttrraakkttoorr
5 3
debdb
5 4
ecadc
5 3
debca
5 3
abaac
*/

/*Output
YES
NO
YES
YES
YES
YES
NO
NO
YES
YES
YES
YES
NO
YES
*/