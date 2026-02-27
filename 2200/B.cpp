// 2026/02/27 20:32:27
// https://codeforces.com/problemset/problem/2200/B

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
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    bool sorted = true;
    for(int i=1;i<n;++i){
        if(arr[i]<arr[i-1]){
            sorted = false;
            break;
        }
    }

    sorted ? cout << n : cout << 1;
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