// 2026/03/29 15:41:14
// https://codeforces.com/problemset/problem/1592/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n,h;
    cin >> n >> h;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end());
    int x = arr[n-1];
    int y = arr[n-2];
    int r = (h/(x+y)) * 2;
    h = h%(x+y);
    
    if(h>x)
        r+=2;
    else if(h!=0)
        ++r;
    cout << r << endl;
    
}


int main(){
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
        soln();
    return 0;
}

/*oin
3
2 4
3 7
2 6
4 2
3 11
2 1 7
*/

/*out
1
2
3
*/