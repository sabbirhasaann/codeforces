#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a,b;
    cin >> a >> b;

    if((a+b)%2 == 0)
        cout <<"Bob\n";
    else
        cout << "Alice\n";

}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
}

/*in
10
1 1
1 4
5 3
4 5
11 9
83 91
1032 9307
839204 7281
1000000000 1000000000
53110 2024
*/
/*out
Bob
Alice
Bob
Alice
Bob
Bob
Alice
Alice
Bob
Bob
*/