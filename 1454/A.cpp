// 2026/03/26 19:34:10
// https://codeforces.com/problemset/problem/1454/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n,mid;
    cin >> n;
    
    if(n&1)
        mid = (n+1)/2;
    else
        mid = n;

    cout << mid << " ";
    while (n)
    {
        if(n!=mid)
            cout << n <<" ";
        --n;
    }
    
    cout << endl;
}


void effsoln(){
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cout << (i + 1) % n + 1 << " ";
    }
}

int main(){
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
        soln();
    return 0;
}

/*in
2
2
5
*/

/*out
2 1 
3 5 4 2 1 
*/