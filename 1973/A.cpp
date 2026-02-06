// 2026/02/06 07:50:57

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void soln()
{
    int a,b,c;
    cin >> a >> b >> c;

    if((a+b+c) % 2)
    {
        cout << -1 << endl;
        return;
    }
    if(c > a+b)
        cout << a+b << endl;
    else
        cout << (a+b+c) / 2 << endl;

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