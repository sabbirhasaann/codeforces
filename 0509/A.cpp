// 2026/03/26 20:02:07
// https://codeforces.com/problemset/problem/509/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n;
    cin >> n;

    vector<vector<int>> mat(n, vector<int>(n,0));
    for(int i=0;i<n;++i)
        mat[i][0] = 1;
    for(int i=0;i<n;++i)
        mat[0][i] = 1;
    
    for(int i=1;i<n;++i)
        for(int j=1;j<n;++j)
            mat[i][j] = mat[i-1][j] + mat[i][j-1];

    cout << mat[n-1][n-1] << endl;
}

int recMax(int r,int c){
    if(r==1 || c==1)
        return 1;
    return recMax(r-1, c) + recMax(r, c-1);
}

void soln1(){
    int n;
    cin >> n;
    cout << recMax(n,n) << endl;
}


int main(){
    ios_base::sync_with_stdio(false);

    int t=1;
    // cin >> t;
    while(t--)
        // soln();
        soln1();
    return 0;
}

/*
    It's a pascal triangle.
    (2n-2)
    (n-1)
*/