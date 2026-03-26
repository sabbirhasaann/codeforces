// 2026/03/26 17:58:39
// https://codeforces.com/problemset/problem/1950/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n;
    cin >> n;
    bool skipr = false,skipc = false;
    for(int i=0;i< 2 *n ; ++i){
        skipc = skipr;
        for(int j=0;j<2*n; ++j){
            if(!skipc)
                cout <<"#";
            else
                cout << ".";

            if(!skipr){
                if(j%2 == 1)
                    skipc = !skipc;
            }
            else{
                if(j%2 == 1)
                    skipc = !skipc;
            }
        }
        cout << endl;
        if(i%2==1)
            skipr = !skipr;
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
4
1
2
3
4
*/

/*out
##
##
##..
##..
..##
..##
##..##
##..##
..##..
..##..
##..##
##..##
##..##..
##..##..
..##..##
..##..##
##..##..
##..##..
..##..##
..##..##
*/