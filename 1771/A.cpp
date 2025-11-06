// 2025/11/06 23:08:05

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void soln()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int min_el = *min_element(arr.begin(), arr.end());
    int max_el = *max_element(arr.begin(), arr.end());
    int min_cnt = count(arr.begin(), arr.end(), min_el);
    int max_cnt = count(arr.begin(), arr.end(), max_el);

    if (min_el - max_el == 0)
        cout << 1LL * n * (n - 1) << endl;
    else
        cout << 1LL * min_cnt * max_cnt * 2 << endl;
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