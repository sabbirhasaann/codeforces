// 2026/02/27 20:24:35
// https://codeforces.com/problemset/problem/1913/B

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
    int cnt1 = 0, cnt0 = 0,n = s.length();
    for(int i=0;i<n;++i)
    {
        if(s[i]=='1') ++cnt1;
        else ++cnt0;
    }
    int kept = 0;
    for(int i=0;i<n;++i){
        if(s[i]=='0')
        {
            if(cnt1>0){
                --cnt1;
                ++kept;
            }
            
            else
                break;
        }

        if(s[i]=='1'){
            if(cnt0>0){
                --cnt0;
                ++kept;
            }
            else
                break;

        }
    }

    cout << n - kept << endl;

    
}


int main(){
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
        soln();
    return 0;
}