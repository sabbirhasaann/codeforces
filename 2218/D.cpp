// 2026/07/22 20:08:49
// https://codeforces.com/problemset/problem/2218/D

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'

vector<int> primes;
void generatePrimes()
{
    const int requiredPrimes = 10000;

    primes.push_back(2);

    for (int num = 3; primes.size() < requiredPrimes; num += 2)
    {
        bool isPrime = true;

        for (int p : primes)
        {
            if (1LL * p * p > num)
                break;

            if (num % p == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
            primes.push_back(num);
    }
}
void soln()
{
    int n;
    cin >> n;

    long long ans = 1;
    for (int i = 0; i < n; ++i)
    {
        cout << 1LL * primes[i] * ans << " ";
        ans = primes[i];
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    generatePrimes();
    int t;
    cin >> t;
    while (t--)
        soln();
    return 0;
}