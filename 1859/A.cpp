// 2026/03/10 05:58:26
// https://codeforces.com/problemset/problem/1859/A

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
    sort(arr.begin(), arr.end());
    if(arr[0] != arr[n-1]){
        int i = n-1;
        while (arr[i-1] == arr[i])
        {
            --i;
        }
        cout << i << " " << n-i << endl;
        for(int j=0;j<i;++j)
            cout << arr[j] <<" ";
        cout << endl;
        for(int j=i;j<n;++j)
            cout << arr[j] <<" ";
        cout << endl;
    }
    else
        cout << -1 << endl;
}


int main(){
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
        soln();
    return 0;
}