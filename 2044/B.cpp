// 2026/03/11 10:57:22
// https://codeforces.com/problemset/problem/2044/B

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
    for(int i=0,j=n-1;i<j;++i,--j){
        if(s[i]=='p')
            s[i] = 'q';
        else if(s[i]=='q')
            s[i] = 'p';
        if(s[j]=='p')
            s[j] = 'q';
        else if(s[j]=='q')
            s[j] = 'p';
        swap(s[i],s[j]);   
    }
    if(n & 1){
        int idx = n/2;
        if(s[idx]=='p')
            s[idx] = 'q';
        else if(s[idx]=='q')
            s[idx] = 'p';
    }
        
    cout << s << endl;
    
}

void effsoln(){
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    for (char &c : s) if (c == 'q') c = 'p'; else if (c == 'p') c = 'q';
    cout << s << '\n';
}


int main(){
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
        soln();
    return 0;
}