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

void effsoln(){
    int n;
	cin >> n;
	for (int i = 0; i < 2 * n; i++) {
		for (int j = 0; j < 2 * n; j++) {
			cout << (i / 2 + j / 2 & 1 ? '.' : '#');
		}
		cout << '\n';
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


/*
You just need to implement what is written. One way is to go cell-by-cell in a regular 𝑛×𝑛 checkerboard, and construct the larger one one cell at a time by copying cell (𝑖,𝑗) into cells (2𝑖,2𝑗), (2𝑖+1,2𝑗), (2𝑖,2𝑗+1), (2𝑖+1,2𝑗+1).

A faster solution is to notice that if we round down coordinates (𝑥,𝑦) in the enlarged checkerboard to (⌊𝑥2⌋,⌊𝑦2⌋), we get the corresponding cell in the original checkerboard. And to output a regular checkerboard, we output # if the sum of coordinates is even, and . if it is odd.

So the faster implementation is: iterate over all cells (𝑥,𝑦) in the 2𝑛×2𝑛 checkerboard. If ⌊𝑥2⌋+⌊𝑦2⌋ is even output #, else output ..
*/