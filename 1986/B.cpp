// 2025/11/03 18:11:11

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
void print_matrix(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
}
void soln()
{
    vector<pair<int, int>> directions = {{-1, 0},
                                         {0, 1},
                                         {1, 0},
                                         {0, -1}};
    int n, m;
    cin >> n >> m;
    vector<vector<int>> mat = input_matrix(n, m);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            bool flag = true;
            int maxi = -1;
            for (pair<int, int> dir : directions)
            {
                int x = i + dir.first;
                int y = j + dir.second;
                if (x >= 0 && x < n && y >= 0 && y < m)
                {
                    if (mat[x][y] > maxi)
                        maxi = mat[x][y];

                    if (mat[i][j] < mat[x][y])
                    {
                        flag = false;
                        break;
                    }
                }
            }
            if (flag)
                mat[i][j] = maxi;
        }
    }

    print_matrix(mat);
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