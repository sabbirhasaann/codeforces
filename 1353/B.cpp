// 2025/08/12 23:00:54

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void soln()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr1(n), arr2(n);
    for (int i = 0; i < n; i++)
        cin >> arr1[i];

    for (int i = 0; i < n; i++)
        cin >> arr2[i];
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    for (int i = 0; i < k; i++)
    {
        if (arr1[i] < arr2[n - i - 1])
            swap(arr1[i], arr2[n - i - 1]);
    }

    cout << accumulate(arr1.begin(), arr1.end(), 0) << endl;
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