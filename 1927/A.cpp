// 2026/03/11 11:49:34
// https://codeforces.com/problemset/problem/1927/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n,f=-1,s=-1;
    cin >> n;
    for(int i=0;i<n;++i){
        char c;
        cin >> c;
        if(c == 'B'){
            if(f == -1)
                f=i;
            s = i;
        }
    }
    cout << s - f + 1 << endl;
    
}


int main(){
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
        soln();
    return 0;
}