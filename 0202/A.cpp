// 2026/03/29 19:50:23
// https://codeforces.com/problemset/problem/202/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{

    string s;
    vector<int> f(26,0);
    cin  >> s;
    for(int i=0;i<s.length();++i)
        ++f[s[i]-'a'];
    for(int i=25;i>=0;--i){
        if(f[i]){
            for(int j=0;j<f[i];++j)
                cout << char(i+'a');
            return;
        }
    }
}

void soln1(){
    while((c=getchar())>96)
	n=c>m?1+0*(m=c):c==m?n+1:n;
	while(n--)
	putchar(m);
}

void soln2(){
    while((c=getchar())>96)
	n=c>m?1+0*(m=c):c==m?n+1:n;
	while(n--)
	putchar(m);
}

char c='a',s;
int n;
main(){
while(cin>>s)s>=c?s>c?c=s,n=1:n++:0;
while(n--)cout<<c;
}

int main(){
    ios_base::sync_with_stdio(false);

    int t=1;
    // cin >> t;
    while(t--)
        soln();
    return 0;
}