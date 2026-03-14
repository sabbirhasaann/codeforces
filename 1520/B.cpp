// 2026/03/14 14:06:20
// https://codeforces.com/problemset/problem/1520/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
#define ENDL cout <<"\n"

void soln()
{
    int tmp,n;
    cin >> tmp;
    n = tmp;
    if(n<10){
        cout << n << endl;
        return;
    }

    int ld = -1;
    bool sameD = true;
    int l = 0;

    while(n){
        int d = n%10;
        n/=10;
        ++l;
        if(ld==-1){
            ld = d;
            continue;
        }
        if(d!=ld)
            sameD = false;
        ld = d;
    }
    // cout << ld << endl;
    // cout << l << endl;
    
    int cnt = (l-1) * 9 + (ld-1);

    int num = ld;
    for(int i=1;i<l;++i){
        num = num * 10 + ld;
    }
    cout << num << endl;

    if(tmp>=num)
        cnt += 1;
    cout << cnt << endl;

    

}


void soln1(){
    int tmp,n;
    cin >> n;
    tmp = n;
    if(n<10){
        cout << n << endl;
        return;
    }

    int ld, l=0;
    while(tmp){
        int d = tmp%10;
        ld = d;
        tmp/=10;
        ++l;
    }
    
    int cnt = (l-1) * 9 + (ld-1);

    int num = ld;
    for(int i=1;i<l;++i){
        num = num * 10 + ld;
    }
    

    if(n>=num)
        cnt += 1;
    cout << cnt << endl;
}

int main(){
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
        // soln();
        soln1();
    return 0;
}

/*input
6
1
2
3
4
5
100
*/

/*output
1
2
3
4
5
18
*/