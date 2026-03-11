// https://codeforces.com/problemset/problem/1915/D
#include <bits/stdc++.h>
using namespace std;
void solve();
int main()
{
    int t;
    cin >> t;

    while(t--)
        solve();
}

void solve()
{
    int n;
    string s;
    string t="";
    cin >> n >> s;
    vector<char>temp(s.size());

    for(int i=0;s[i]!='\0';++i)
    {
        if(s[i]=='a' || s[i]=='e')
            temp[i] = 'V';
        else if(s[i]=='b' || s[i]=='c' || s[i]=='d')
            temp[i] = 'C';
    }
    cout << t <<endl;
    for(int i=s.size()-1;i>=0;)
    {
        if(temp[i]=='C' && (s.size()-i+1)>=2)
        {
            t+=s[i];
            t+=s[i-1];
            t+=s[i-2];
            if(s.size()-i>2)
                t+='.';
            i-=2;
        }
        else if(temp[i]=='V')
        {
            t+=s[i];
            t+=s[i-1];
            if(s.size()-i>2)
                t+='.';
            i-=1;
        }
   
    }
    reverse(t.begin(),t.end());
    cout << t << endl;
    
}

/*input
6
8
bacedbab
4
baba
13
daddecabeddad
3
dac
6
dacdac
22
dababbabababbabbababba
*/

/*output
ba.ced.bab
ba.ba
dad.de.ca.bed.dad
dac
dac.dac
da.bab.ba.ba.bab.bab.ba.bab.ba
*/