// 2026/02/14 12:40:31
// https://codeforces.com/problemset/problem/267/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int gcdOps(int a, int b)
{
    if (b == 0)
        return 0;
    return a/b + gcd(b, a % b);
}

void soln()
{
    int a,b,res=0;
    cin >> a >> b;
    
    if(a<b)
        swap(a,b);

    while (a != 0 && b!= 0)
    {
        if(a==b){
            ++res;
            a = a - b;
        }

        if(a>b)
        {
            res += a/b;
            a = a % b;
            swap(a,b);
        }

    }
    cout << res << endl;
    
}


int main(){
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
        soln();
    return 0;
}