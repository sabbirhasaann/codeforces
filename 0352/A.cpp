// 2026/02/06 12:39:12

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void soln()
{
    int n,five=0,zero=0;
    cin >> n;
    while(n--){
        int x;
        cin >> x;
        if(x == 5)
            ++five;
        else
            ++zero;
    }

    five /= 9;
    if(!zero)
    {
        cout << -1;
        return;
    }

    else if(zero && five){
        string s;
        for(int i=0;i<five*9;i++)
            s += '5';
        for(int i=0;i<zero;i++)
            s+= '0';
        cout << s << endl;
        return;
    }
    
    cout << 0 << endl;

    

}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t=1;
    // cin >> t;
    while(t--)
        soln();
    return 0;
}