// 2026/04/04 20:22:02
// https://codeforces.com/problemset/problem/2218/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    vector<int> a(7);
    for(int i=0;i<7;++i)
        cin >> a[i];
    int maX = INT_MIN;
    for(int i=0;i<7;i++){
        int sum=a[i];
        for(int j=0;j<7;++j){   
            if(i==j)
                continue;
            sum += (-1 * a[j]); 
        }
        maX = max(maX, sum);
    }
    cout << maX << endl;

}


int main(){
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
        soln();
    return 0;
}