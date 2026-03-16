// 2026/03/17 02:32:47
// https://codeforces.com/problemset/problem/935/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n,ans=0;
    cin >> n;
    int l = 1, r = n - 1;
    while(l<=r){
        if(r%l == 0)
            ++ans;
        ++l;
        --r;
    }
    
    cout << ans<< endl;
}


int main(){
    ios_base::sync_with_stdio(false);

    int t=1;
    // cin >> t;
    while(t--)
        soln();
    return 0;
}

/*input
2
*/

/*output
1
*/

/*input
10
*/

/*output
3
*/

/*
The problem is also equivalent to finding
the number of ways to divide the n employees 
into equal teams where each team contains more 
than one employee. It can also be solved in O(sqrt(n)) by 
finding the number of divisors of n.
*/