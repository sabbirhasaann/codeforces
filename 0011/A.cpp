// 2026/02/15 15:11:35
// https://codeforces.com/problemset/problem/11/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void printArray(vector<int> &v)
{
    for (int x : v)
        cout << x << " ";
    cout << endl;
}
void soln()
{
    int n,d,moves=0;
    cin >> n >> d;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
        cin >> arr[i];
    // printArray(arr);
    for(int i=1;i<n;++i){
        int diff = arr[i-1] - arr[i];
        if(diff>=0){
            int step = diff/d;g
            moves = moves +  step + 1;
            arr[i] = arr[i] + (step+1) * d;
        }
    }   
    // printArray(arr);
    cout << moves << endl;
}


int main(){
    ios_base::sync_with_stdio(false);

    int t=1;
    // cin >> t;
    while(t--)
        soln();
    return 0;
}