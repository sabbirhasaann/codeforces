// 2026/03/14 15:13:23
// https://codeforces.com/problemset/problem/1814/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    long long n,k;
    cin >> n >> k;
    for(int i=0;i<2;++i){
        if((n - i * k) >= 0 && (n - i * k)%2==0){
            YES;
            return;
        }
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

/*input
4
5 3
6 1
7 4
8 8
*/

/*output
YES
YES
NO
YES
*/

/*
4 3
*/