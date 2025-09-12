// 2025/09/12 20:52:34

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void soln1()
{
    int n;
    long long left = 0, right = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        if (x < 0)
            left += x;
        else
            right += x;
    }
    cout << abs(right - abs(left)) << endl;
}
void soln()
{
    int n;
    long long sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        sum += x;
    }
    cout << abs(sum) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
        // soln();
        soln1();
    return 0;
}