// 2026/02/07 17:34:57

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void soln()
{
    long long x, val = 999999999;
    cin >> x;
    cout << val - x << endl;

}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while(t--)
        soln();
    return 0;
}


// for(long long i = 1;i<x;i++)
// {
//     int len = log10(i) + 1;
//     long long num = x * pow(10, len) + i;
//     cout <<"Choose: "<< i <<" " << num <<" " << num / (x + i) <<" "<< num % (x+i) << endl;
// }