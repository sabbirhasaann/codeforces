// 2024/04/09

#include <bits/stdc++.h>
using namespace std;

vector<int> primes;

void sieve(int n)
{
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= n; i++)
    {
        if (is_prime[i])
        {
            primes.push_back(i);
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }
}

int main()
{
    int n, count = 0;
    cin >> n;
    sieve(n);

    for (int j = 2; j <= n; j++)
    {
        int num = j;
        vector<int> divisors;
        for (int i : primes)
        {
            if (j % i == 0)
            {
                divisors.push_back(i);
                while (num % i == 0)
                {
                    num /= i;
                }
            }
        }
        if (num > 1)
            divisors.push_back(num);
        if (divisors.size() == 2)
            count++;
    }
    cout << count << endl;
}