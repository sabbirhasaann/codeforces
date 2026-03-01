// 2026/03/01 09:17:32
// https://codeforces.com/problemset/problem/1342/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    long long x,y,a,b,cost=0;
    cin >> x >> y >> a >> b;

    if((x>0 && y>0) || (x<0 && y<0)){
        x = abs(x);
        y = abs(y);

        if(2 * a < b){
            cost += x * a + y * a;
        }
        else{
            cost += min(x,y) * b;
            cost += (max(x,y) - min(x,y)) * a;
        }
    }

    else{
        cost += abs(x)*a + abs(y)*a;
    }

    cout << cost << endl;
}

void effsoln(){
    long long x,y,a,b,cost=0;
    cin >> x >> y >> a >> b;

    x = abs(x);
    y = abs(y);
    
    if(b < 2 * a){
        cost += min(x,y) * b;
        cost += (max(x,y) - min(x,y)) * a;
    }
    else
        cost += x * a + y * a;
    
    cout << cost << endl;
}

int main(){
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
        soln();
    return 0;
}