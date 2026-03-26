// 2026/03/26 19:11:07
// https://codeforces.com/problemset/problem/2000/A

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
    int n = s.length();
    
    if(n == 3 && s[0]=='1' && s[1]=='0' && s[2] >= '2')
        YES;
    
    else if(n>=4 && s[0]=='1' && s[1]=='0' && s[2] >= '1')
        YES;
    else
        NO;
}

void effsoln(){
    int n;
    cin >> n;
    if((n>= 102 && n<= 109) || (n>=1010 & n<=1099))
        YES;
    else
        NO;
}


int main(){
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
        // soln();
        effsoln();
    return 0;
}

/*in
7
100
1010
101
105
2033
1019
1002
*/

/*out
NO
YES
NO
YES
NO
YES
NO
*/