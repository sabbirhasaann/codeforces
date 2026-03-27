// 2026/03/27 07:56:45
// https://codeforces.com/problemset/problem/1385/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int x,y,z;
    cin >> x >> y >> z;

    if(x==y && y==z){
        YES;
        cout << x << " " << x << " " << x << endl;
        
    }

    else if(x==y && z < x){
        YES;
        cout << x << " " << z << " " << 1 << endl;
    }
    else if(x==z && y < x){
        YES;
        cout << y << " " << z << " " << 1 << endl;
    }
    else if(y==z && x < y){
        YES;
        cout << x << " " << 1 << " " << z << endl;
    }
    else
        NO;
}

void soln1(){
    vector<int> a(3);
    for (auto &it : a) cin >> it;
    sort(a.begin(), a.end());
    if (a[1] != a[2]) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl << a[0] << " " << a[0] << " " << a[2] << endl;
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
5
3 2 3
100 100 100
50 49 49
10 30 20
1 1000000000 1000000000
*/

/*out
YES
3 2 1
YES
100 100 100
NO
NO
YES
1 1 1000000000
*/