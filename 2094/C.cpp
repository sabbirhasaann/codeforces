// 2025/06/06 20:34:23

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

vector<vector<int>> input_matrix(int n, int m)
{
    vector<vector<int>> arr(n, vector<int>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];
    return arr;
}

void soln()
{
    int n, summation = 0, sum = 0;
    cin >> n;
    summation = n * (2 * n + 1);
    vector<vector<int>> mat = input_matrix(n, n);
    vector<int> sec_pass;
    for (int j = 0; j < n; j++)
    {
        sum += mat[0][j];
        sec_pass.push_back(mat[0][j]);
    }
    for (int i = 1; i < n; i++)
    {
        sum += mat[i][n - 1];
        sec_pass.push_back(mat[i][n - 1]);
    }

    sec_pass.insert(sec_pass.begin(), (summation - sum));

    for (int i : sec_pass)
        cout << i << " ";
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
    {
        soln();
    }
    return 0;
}