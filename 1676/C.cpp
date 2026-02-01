// 2026/01/25 18:31:05

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void soln()
{
    int n,m, minimum = INT_MAX;
    cin >> n >> m;
    vector<string> s(n);
    for(int i=0;i<n;i++)
        cin >> s[i];

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int move = 0;
            for(int k=0;k<m;k++){
                move += abs(s[i][k] - s[j][k]);
            }

            minimum = min(minimum, move);
        }
    }

    cout << minimum << endl;
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