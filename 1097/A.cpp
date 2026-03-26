// 2026/03/26 20:20:44
// https://codeforces.com/problemset/problem/1097/A

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
    bool possible = false;
    int i=0;
    while(i<5){
        string t;
        cin >> t;
        if(s[0]==t[0] || s[1]==t[1])
            possible = true;
        ++i;
    }
    if(possible)
        YES;
    else
        NO;
}


int main(){
    ios_base::sync_with_stdio(false);

    int t=1;
    // cin >> t;
    while(t--)
        soln();
    return 0;
}

/*in
AS
2H 4C TH JH AD
*/

/*out
YES
*/

/*in
2H
3D 4C AC KD AS
*/
/*out
NO*/

/*int
4D
AS AC AD AH 5H
*/

/*out
YES
*/