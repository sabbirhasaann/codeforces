// 2026/02/05 19:29:02
    
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void soln()
{
    int n,a,b,x=0,y=0,j=0;
    string s;
    cin >> n >> a >> b >> s;
    
    bool reached = false;
    
    while(j < 21 && !reached){
    
        for(int i=0;i<n;i++)
        {
            if(s[i] == 'N')
                ++y;
            else if(s[i]=='S')
                --y;
            else if(s[i] == 'E')
                ++x;
            else if(s[i] == 'W')
                --x;
    
            if(x==a && y==b){
                reached = true; 
                break;
            }
    
        }
        ++j;
    }
    
    if(reached)
        cout << "YES\n";
    else
        cout << "NO\n";
    
}
    
    
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    while(t--)
        soln();
    return 0;
}