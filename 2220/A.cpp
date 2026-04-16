// 2026/04/13 20:39:54
// https://codeforces.com/problemset/problem/2220/A

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
    sort(arr.begin(), arr.end(), greater<>());
    
    
    for(int i = 0; i < n - 1; i++) {
        if(arr[i] == arr[i+1]) {
            cout << -1 << endl;
            return;
        }
    }
    
    for(int i=0;i<n;++i)
        cout << arr[i] << " ";
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