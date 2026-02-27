// 2026/02/27 14:11:45
// https://codeforces.com/problemset/problem/1690/D

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'

#define forn(i, n) for (int i = 0; i < int(n); i++)

void soln()
{
    int n, k, wh = 0, bl = 0, minimum = INT_MAX;
    string s;
    cin >> n >> k >> s;
    for(int i=0;i<k;++i)
    {
        if(s[i]=='B')
            ++bl;
        else
            ++wh;
    }
    minimum = min(minimum, wh);

    for(int i=1,j=k;j<n;++i,++j){
        if(s[i-1]=='B')
            --bl;
        else
            --wh;
        
        if(s[j]=='B')
            ++bl;
        else
            ++wh;
        minimum = min(minimum, wh);
    }

    cout << minimum << endl;

}





int main(){
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    // while(t--)
        // soln();
    forn(tt, t) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> w(n + 1);
        for (int i = 1; i <= n; i++)
            w[i] = w[i - 1] + int(s[i - 1] == 'W');
        int result = INT_MAX;
        for (int i = k; i <= n; i++)
            result = min(result, w[i] - w[i - k]);
        cout << result << endl;
    }


    return 0;
}