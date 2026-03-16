// 2026/03/17 02:08:33
// https://codeforces.com/problemset/problem/1783/A

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
    vector<int> a(n);
    unordered_map<int,int> mp;
    for(int i=0;i<n;++i){
        cin >> a[i];
        ++mp[a[i]];
    }

    if(mp.size()>=2){
        YES;
        sort(a.rbegin(), a.rend());
        if(a[0] == a[1])
            swap(a[0], a[n-1]);
    
        for(int i=0;i<n;++i)
            cout << a[i] <<" ";
        cout << endl;
    }
    else
        NO;
}


int main(){
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
        soln();
    return 0;
}


/*input
4
4
3 3 6 6
2
10 10
5
1 2 3 4 5
3
1 4 4
*/


/*ouput
YES
3 6 3 6
NO
YES
2 4 1 5 3
YES
1 4 4
*/