// 2026/03/28 20:39:19
// https://codeforces.com/problemset/problem/2211/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
        cin >> arr[i];

    for(int i=0;i<n;++i){
        if(n==1)
            cout << 1 <<" ";
        else
            cout << 2 << " ";
    }
    cout << endl;

}


int main(){
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
        soln();
    return 0;
}