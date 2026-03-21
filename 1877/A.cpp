// 2026/03/21 11:54:54
// https://codeforces.com/problemset/problem/1877/A

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
    vector<int> arr(n-1);
    for(int i=0;i<n-1;i++)
        cin >> arr[i];
    int sum = accumulate(arr.begin(), arr.end(), 0);
    
    if(sum<0)
        cout << abs(sum) << endl;
    else
        cout << -sum << endl;
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
2
4
3 -4 5
11
-30 12 -57 7 0 -81 -68 41 -89 0
*/