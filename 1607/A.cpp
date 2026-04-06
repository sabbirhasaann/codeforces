// 2026/04/06 21:12:38
// https://codeforces.com/problemset/problem/1607/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    vector<int> keys(26);
    for(int i=0;i<26;++i){
        char c;
        cin >> c;
        keys[c-'a'] = i+1;
    }
    string s;
    char curr,prev;
    int ans = 0;
    cin >> s;

    for(int i=0;i<s.length();++i){
        if(i==0){
            curr = s[i];
            continue;
        }else{
            prev = curr;
            curr = s[i];
        }

        ans += abs(keys[prev-'a'] - keys[curr-'a']);
    }
    cout << ans << endl;
}


int main(){
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
        soln();
    return 0;
}  

/*in
5
abcdefghijklmnopqrstuvwxyz
hello
abcdefghijklmnopqrstuvwxyz
i
abcdefghijklmnopqrstuvwxyz
codeforces
qwertyuiopasdfghjklzxcvbnm
qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqq
qwertyuiopasdfghjklzxcvbnm
abacaba
*/

/*out
13
0
68
0
74
*/