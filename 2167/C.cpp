// 2025/10/29 20:20:05

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

    if (any_of(arr.begin(), arr.end(), [](int x)
               { return x % 2 == 1; }) &&
        any_of(arr.begin(), arr.end(), [](int x)
               { return x % 2 == 0; }))
        sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
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