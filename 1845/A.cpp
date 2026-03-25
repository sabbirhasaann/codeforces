// 2026/03/25 19:59:56
// https://codeforces.com/problemset/problem/1845/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n,k,x,ans=0;
    cin >> n >> k >> x;
    if(x==1){
        if(n%2 == 0 && k>=2){
            ans = n/2;
            YES;
            cout << ans << endl;
            for(int i=0;i<ans;++i)
                cout << 2 << " ";
            cout << endl;
            return;
        }

        if(n%2 == 1 && k>=3){
            ans = 1;
            n-=3;
            ans += n/2;
            YES;
            cout << ans << " ";
            cout << 3 << " ";
            for(int i=0;i<ans-1;++i)
                cout << 2 << " ";
            cout << endl;
            return;
        }

    }
    else{
        YES;
        cout << n << endl;
        for(int i=0;i<n;++i)
            cout << 1 << " ";
        cout << endl;
        return;
    }

    NO;

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
5
10 3 2
5 2 1
4 2 1
7 7 3
6 1 1
*/

/*out
YES
6
3 1 1 1 1 3
NO
YES
2
2 2
YES
1
7
NO
*/