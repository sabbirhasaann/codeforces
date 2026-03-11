#include <bits/stdc++.h>
using namespace std;
// https://codeforces.com/problemset/problem/1915/A

void soln()
{
    int a,b,c;
    cin >> a >> b >> c;

    if(a==b)
        cout << c << endl;
    else if(a==c)
        cout << b << endl;
    else if(b==c)
        cout << a <<endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
        soln();
    
}

/*input
10
1 2 2
4 3 4
5 5 6
7 8 8
9 0 9
3 6 3
2 8 2
5 7 7
7 7 5
5 7 5
*/

/*output
1
3
6
7
0
6
8
5
5
7
*/