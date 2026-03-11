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
    for(int i=0,j=s.length()-1;i<=j;++i,--j){
        if(s[i]=='p' && s[i]==s[j]){
            s[i] = 'q';
            s[j] = 'q';
        }
        else if(s[i]=='q' && s[i]==s[j]){
            s[i] = 'p';
            s[j] = 'p';
        }
        else if(s[i]=='w' || s[j]=='w'){
            if(s[i]=='p'){
                s[i] = 'q';
            }
            else if(s[i]=='q')
                s[i] = 'p';

            if(s[j] == 'p')
                s[j] = 'q';
            else if(s[j] == 'q')
                s[j] = 'p';
                
            swap(s[i],s[j]);   
        }
    }
    cout << s << endl;
    
}


int main(){
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
        soln();
    return 0;
}