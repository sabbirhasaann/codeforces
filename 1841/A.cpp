#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void soln()
{
    int n;
    cin >> n;
    if(n < 5)
        cout << "Bob\n";
    else
        cout << "Alice\n";
        
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)
        soln();
    return 0;
}