// 2026/03/07 20:43:47
// https://codeforces.com/problemset/problem/1294/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n,diff=0,maxim;
    
    vector<int> a(3);
    for(int i=0;i<3;++i)
        cin >> a[i];
    cin >> n;
    maxim = *max_element(a.begin(), a.end());
    for(int i=0;i<3;++i)
        diff += (maxim - a[i]);
    if(diff<=n){
        if((n-diff) % 3 == 0)
            YES;
        else
            NO;
    }
    else
        NO;

}

void soln1(){
    int a[3], n;
    cin >> a[0] >> a[1] >> a[2] >> n;
    sort(a, a + 3);
    n -= 2 * a[2] - a[1] - a[0];
    if (n < 0 || n % 3 != 0) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
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

/*input
5
5 3 2 8
100 101 102 105
3 2 1 100000000
10 20 15 14
101 101 101 3
*/

/*output
YES
YES
NO
NO
YES
*/