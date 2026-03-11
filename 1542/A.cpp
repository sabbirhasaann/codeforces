// 2026/03/11 10:48:53
// https://codeforces.com/problemset/problem/1542/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n, odd=0,even=0;
    cin >> n;
    for(int i=0;i<2*n;++i){
        int x;
        cin >> x;
        if(x&1)
            ++odd;
        else
            ++even;
    }
    if(odd==even)
        YES;
    else
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