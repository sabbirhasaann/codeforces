// 2026/03/06 14:29:25
// https://codeforces.com/problemset/problem/431/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int a,b,c,d;
    string s;
    cin >> a >> b >> c >> d >> s;
    vector<int> f(5,0);

    for(int i=0;i<s.length();++i)
        ++f[s[i]-'0'];
        
    cout << f[1] * a + f[2] * b + f[3] * c + f[4] * d;
}

void effsoln(){
    int a[5];
    for (int i = 1; i <= 4; i ++)
        cin >> a[i];
    string s;
    cin >> s;
    int sum = 0;
    for (int i = 0 ;i < s.size(); i ++)
        sum += a[s[i]-'0'];
    cout << sum << endl;
}

int main(){
    ios_base::sync_with_stdio(false);

    int t=1;
    // cin >> t;
    while(t--)
        soln();
    return 0;
}