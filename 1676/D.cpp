// 2026/02/02 04:35:01

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
    int n,m,idx=0,max_sum = 0;
    cin >> n >> m;
    vector<vector<int>> mat = input_matrix(n,m);
    vector<int> left(n+m-1, 0), right(n+m-1, 0);

    for(int i=0;i<n;i++)
    {
        int sum = 0,r=i,c=0;
        while(r >= 0 && r<n && c>=0 && c < m){
            sum+= mat[r][c];
            --r;
            ++c;
        }
        left[idx++] = sum;

    }

    for(int i=1;i<m;i++)
    {
        int sum = 0,r=n-1,c=i;
        while(r >= 0 && r<n && c>=0 && c < m){
            sum+= mat[r][c];
            --r;
            ++c;
        }
        left[idx++] = sum;

    }

    idx=0;
    for(int i=m-1;i>=0;i--)
    {
        int sum = 0,r=0,c=i;
        while(r >= 0 && r<n && c>=0 && c < m){
            sum+= mat[r][c];
            ++r;
            ++c;
        }
        right[idx++] = sum;

    }

    for(int i=1;i<n;i++)
    {
        int sum = 0,r=i,c=0;
        while(r >= 0 && r<n && c>=0 && c < m){
            sum+= mat[r][c];
            ++r;
            ++c;
        }
        right[idx++] = sum;

    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            max_sum = max(max_sum, left[i+j]+right[i-j+m-1]-mat[i][j]);
    }
    cout << max_sum << endl;

}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while(t--)
        soln();
    return 0;
}