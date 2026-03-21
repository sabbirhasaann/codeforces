// 2026/03/21 18:11:25
// https://codeforces.com/problemset/problem/2014/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n,k,takenAmount=0, poor = 0;
    cin >> n >> k;
    for(int i=0;i<n;++i){
        int x;
        cin >> x;
        if(x>=k)
            takenAmount += x;
        else if(x==0 && takenAmount>0){
            ++poor;
            --takenAmount;
        }
    }
    cout << poor << endl;
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
4
2 2
2 0
3 2
3 0 0
6 2
0 3 0 0 0 0
2 5
5 4
*/