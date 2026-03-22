// 2026/03/21 20:24:32
// https://codeforces.com/problemset/problem/2209/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    long long n,c,k;
    cin >> n >> c >> k;
    vector<long long> a(n);
    for(int i=0;i<n;++i)
        cin >> a[i];
    
    sort(a.begin(), a.end());
    for(int i=0;i<n;++i){
        if(a[i]<=c){
            long long dif = c - a[i];
            a[i] += min(k,dif);
            k-=min(k,dif);
            c+= a[i];
        }
    }
    cout << c << endl;
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
10
1 12 23
21
1 8 4
5
1 3 4
16
3 6 3
14 9 11
5 9 2
20 16 18 16 11
5 18 30
1 2 93 84 2
7 29 13
2 9 38 4 7 1 6
10 9 2
8 1 8 11 17 3 14 16 20 10
10 192 109
1 9 20 9 829 3 87 1 283 7
10 1000000000 1000000000
19 1000000000 1 9 2 3 8 1 2 3
*/

/*out
12
16
3
6
9
53
109
119
721
3000000048
*/