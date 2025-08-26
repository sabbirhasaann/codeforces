// 2025/08/26 12:42:40

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void soln1()
{
    int n;
    cin >> n;
    int a = sqrt(2 * (n - 1) + 1), triplets = 0; // max value of a
    vector<vector<int>> res;
    while (a > 1)
    {
        vector<int> res_int;
        int val = (a * a) - 1;
        if (!(val & 1))
        {
            int b = val / 2;
            res_int.push_back(a);
            res_int.push_back(b);
            res_int.push_back(b + 1);
            triplets++;
            res.push_back(res_int);
        }
        a--;
    }
    cout << triplets << endl;
}

void soln2()
{
    int n, triplets = 0;
    cin >> n;
    int b = n - 1;
    while (b > 3)
    {
        int a = sqrt(2 * b + 1);
        int val = a * a - 1;
        if (val % 2 == 0)
        {
            b = val / 2;
            triplets++;
            b--;
        }
        else
            b = val / 2;
    }
    cout << triplets << endl;
}

void soln3()
{
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 3; i * i <= 2 * n - 1; i += 2)
        ++ans;
    cout << ans << '\n';
}
void soln()
{
    int n;
    cin >> n;
    int b = n - 1;
    int max_a = sqrt(2 * b + 1) - 1;
    int ans = max_a / 2;
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
        soln();
    return 0;
}