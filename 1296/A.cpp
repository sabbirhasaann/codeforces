// 2026/03/14 10:10:22
// https://codeforces.com/problemset/problem/1296/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int odd = 0,even=0;
    int n;
    cin >> n;
    for(int i = 0;i<n;++i){
        int x;
        cin >> x;
        if(x&1)
            ++odd;
        else
            ++even;
    }
    // cout << odd <<" " << even << endl;
    if(odd&1 || (odd > 0 && even>0))
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

/*in
5
2
2 3
4
2 2 8 8
3
3 3 3
4
5 5 5 5
4
1 1 1 1
*/

/*out
YES
NO
YES
NO
NO
*/

/*
7
1052 445 683 995 722 1012 1263
*/

/*
YES
*/