// 2026/02/27 15:50:58
// https://codeforces.com/problemset/problem/577/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'

void soln1()
{
    int n, x;
    cin >> n >> x;

    int ans = 0;
    bool same = false;

    for (int i = 1; (long long)i * i <= x; ++i)
    {
        if (x % i == 0)
        {
            int b = x / i;
            if (i <= n && b <= n)
            {
                if (i != b)
                    ans += 2;
                else
                    ans++;
            }
        }
    }

    cout << ans << endl;
}

unordered_map<int, int> primeFactors(int n)
{
    unordered_map<int, int> factors;

    while (n % 2 == 0)
    {
        ++factors[2];
        n /= 2;
    }

    for (long long i = 3; i * i <= n; i += 2)
    {
        while (n % i == 0)
        {
            ++factors[i];
            n /= i;
        }
    }

    if (n > 2)
    {
        ++factors[n];
    }

    return factors;
}

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void soln()
{
    int n, x, cnt = 0;
    cin >> n >> x;

    bool perfectSquare = true;
    unordered_map<int, int> factors = primeFactors(gcd(n, x));

    for (auto p : factors)
    {
        if (p.first > n)
        {
            cnt = 0;
            break;
        }
        if (p.second & 1)
            perfectSquare = false;

        cnt += (2 * p.second);
    }

    if (perfectSquare)
        ++cnt;
    cout << cnt << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);

    int t = 1;
    // cin >> t;
    while (t--)
        // soln();
        soln1();

    return 0;
}

/*in
10 5
*/
/*out
2
*/

/*in
6 12
*/

/*out
4
*/

/*in
5 13
*/

/*out
0
*/