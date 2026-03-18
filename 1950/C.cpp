// 2026/03/18 14:01:24
// https://codeforces.com/problemset/problem/1950/C

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
    
    int h = 10 * (s[0] - '0') + (s[1]-'0');
    int m = 10 * (s[3] - '0') + (s[4]-'0');

    (h%12)?  cout << setfill('0') << setw(2) << (h%12) : cout << 12;
    cout <<":";
    cout << setfill('0') << setw(2) << m <<" ";

    (h>=12) ? cout <<  "PM": cout << "AM";
    cout << endl;


}


void effsoln() {
    int h, m; char c;
    cin >> h >> c >> m;
    string am = (h < 12 ? " AM" : " PM");
    h = (h % 12 ? h % 12 : 12);
    cout << (h < 10 ? "0" : "") << h << c << (m < 10 ? "0" : "") << m << am << '\n';
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
11
09:41
18:06
12:14
00:59
00:00
14:34
01:01
19:07
11:59
12:00
21:37
*/

/*ouput
09:41 AM
06:06 PM
12:14 PM
12:59 AM
12:00 AM
02:34 PM
01:01 AM
07:07 PM
11:59 AM
12:00 PM
09:37 PM
*/