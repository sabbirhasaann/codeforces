// 2026/03/08 19:43:37
// https://codeforces.com/problemset/problem/1760/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    vector<bool> charSet(26,false);
    int n;
    string s;
    cin >> n >> s;

    for(int i=0;i<n;++i)
        charSet[s[i]-'a'] = true;
    int i = 25;
    while (i>=0)
    {
        if(charSet[i]==true)
            break;
        --i;
    }
    cout << i+1 << endl;
}

void effsoln() {
    int n; string s; cin >> n >> s;
    sort(s.begin(), s.end());
    cout << s.back() - 'a' + 1 << "\n";
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
5
1
a
4
down
10
codeforces
3
bcf
5
zzzzz
*/

/*output
1
23
19
6
26
*/