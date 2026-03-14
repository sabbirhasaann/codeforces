// 2026/03/14 10:32:49
// https://codeforces.com/problemset/problem/1992/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    multiset<int> ms;
    for(int i=0;i<3;++i){
        int x;
        cin >> x;
        ms.insert(x);
    }

    for(int i=0;i<5;++i){
        auto it = ms.begin();
        ms.insert(*it + 1);
        ms.erase(it);
    }
    
    int mul = 1;
    for(int x: ms)
        mul *= x;
    cout << mul << endl;
    
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
2
2 3 4
10 1 10
*/

/*output
100
600
*/