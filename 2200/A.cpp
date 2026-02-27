// 2026/02/27 20:32:05
// https://codeforces.com/problemset/problem/2200/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n,player=0;
    cin >> n;
    vector<int> arr(n);
    int Max = -1;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        Max = max(Max, arr[i]);
    }
    for(int i=0;i<n;++i)
        if(arr[i]==Max)
            ++player;
    cout << player << endl;
}


int main(){
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
        soln();
    return 0;
}