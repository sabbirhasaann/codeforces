// 2026/03/13 15:20:42
// https://codeforces.com/problemset/problem/320/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    string s;
    cin >> s;
    int i = 0;
    while(i<s.length()){
        if(s[i]!='1'){
            NO;
            return;
        }
        else{
            ++i;
            if(s[i] == '4')
                ++i;
            if(s[i] == '4')
                ++i;
        }
    }
    YES;
}


int main(){
    ios_base::sync_with_stdio(false);

    int t=1;
    // cin >> t;
    while(t--)
        soln();
    return 0;
}

/*input
114114
1111
441231
*/

/*output
YES
YES
NO
*/