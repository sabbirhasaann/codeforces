// 2026/02/27 19:46:34
// https://codeforces.com/problemset/problem/556/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n;
    stack<char> s;
    cin >> n;

    for(int i=0;i<n;++i){
        char c;
        cin >> c;
        if(s.empty() || s.top() == c)
            s.push(c);
        else
            s.pop();
    }
    cout << s.size() << endl;

}


int main(){
    ios_base::sync_with_stdio(false);

    int t=1;
    // cin >> t;
    while(t--)
        soln();
    return 0;
}