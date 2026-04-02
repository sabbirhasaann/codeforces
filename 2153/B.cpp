// 2026/03/29 20:00:30
// https://codeforces.com/problemset/problem/2153/B

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
    
    while(x>0 || y>0 || z>0){
        int a = x & 1;
        int b = y & 1;
        int c = z & 1;
    
        x>>=1;
        y>>=1;    
        z>>=1;    
        if((a==1 && b == 0 && c==1) || (a==0 && b == 1 && c==1) || (a==1 && b == 1 && c==0)){
            NO;
            return;
        }

    }   
    YES;

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
1 1 1
3 2 6
4 8 12
9 10 12
12730 3088 28130
*/

/*out
YES
YES
NO
YES
NO
*/