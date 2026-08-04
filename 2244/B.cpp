// 2026/08/04 16:13:41
// https://codeforces.com/problemset/problem/2244/B
// B. Nikita and Books

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void printArray(vector<long long> &v)
{
    for (long long x : v)
        cout << x << " ";
    cout << endl;
}

void soln()
{
    int n;
    cin >> n;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    long long rem = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        if (arr[i] > i + 1)
        {
            long long r = arr[i] - i - 1;
            arr[i] -= r;
            arr[i + 1] += r;
        }
        if (arr[i] >= arr[i + 1])
        {
            NO;
            return;
        }
    }

    YES;
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
