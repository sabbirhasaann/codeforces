// 2026/03/06 14:48:29
// https://codeforces.com/problemset/problem/1858/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FIRST cout << "First\n"
#define SECOND cout << "Second\n"
#define endl '\n'
void soln()
{
    int a,b,c;
    cin >> a >> b >> c;
    if((a + (c+1)/ 2) > b + (c/2))
        FIRST;
    else
        SECOND;
}

void soln1(){
    int a,b,c;
    cin >> a >> b >> c;
    if(c&1){
        if(b>a)
            SECOND;
        else
            FIRST;
    }
    else{
        if(a>b)
            FIRST;
        else
            SECOND;
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