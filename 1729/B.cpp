// 2026/01/25 13:30:42

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void soln()
{
    int n;
    string s;
    cin >> n >> s;

    vector<char> chars = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    for(int i=0;i<n;){
        if(i<n-3 && s[i+2]=='0' && s[i+3]=='0')
        {
            cout << chars[(s[i]-'0')-1];
            i++;
        }
        else if(i<n-2 && s[i+2]=='0')
        {
            cout << chars[(s[i]-'0') * 10 + (s[i+1]-'0') - 1];
            i+=3;
        }
        else
        {
            cout << chars[(s[i]-'0')-1];
            i++;
        }
    }
    cout << endl;

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