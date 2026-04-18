// 2026/04/18 07:06:42
// https://codeforces.com/problemset/problem/1742/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    vector<vector<char>> stripes(8, vector<char>(8));
    for(int i=0;i<8;++i){
        for(int j=0;j<8;++j)
            cin >> stripes[i][j];
    }



    for(int i=0;i<8;++i){
        bool lastR = true;
        for(int j=0;j<8;++j){
            if(stripes[i][j] == 'B'){
                lastR = !lastR;
                break;
            }
        }
        if(lastR){
            cout << 'R' << endl;
            return;
        }
    }

    cout << 'B' << endl;


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


....B...
....B...
....B...
RRRRRRRR
....B...
....B...
....B...
....B...


RRRRRRRB
B......B
B......B
B......B
B......B
B......B
B......B
RRRRRRRB


RRRRRRBB
.B.B..BB
RRRRRRBB
.B.B..BB
.B.B..BB
RRRRRRBB
.B.B..BB
.B.B..BB


........
........
........
RRRRRRRR
........
........
........
........
*/

/*out
R
B
B
R
*/