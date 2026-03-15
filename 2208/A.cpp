// 2026/03/14 15:32:12
// https://codeforces.com/problemset/problem/2208/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'

int cnt[10000];
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
    int i,flag,a,n;
    cin>>n;
    for(i=0;i<n*n;i++)cnt[i]=0;
    for(i=0;i<n*n;i++)
    {
        cin>>a;
        cnt[a-1]++;
    }
    flag=0;
    for(i=0;i<n*n;i++)
    {
        if(cnt[i]>n*(n-1))flag=1;
    }
    if(flag)cout<<"NO\n";
    else cout<<"YES\n";
       
}


int main(){
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
        soln();
    return 0;
}

/*input
3
3
1 2 3
3 1 4
4 1 2
3
1 1 1
2 3 4
1 4 3
3
1 1 1
1 1 1
1 1 2
*/