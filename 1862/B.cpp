// 2026/03/08 09:21:53
// https://codeforces.com/problemset/problem/1862/A

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
    vector<int> arr(n), a;
    for(int i=0;i<n;i++)
        cin >> arr[i];

    a.push_back(arr[0]);
    for(int i=1;i<n;++i){
        if(arr[i-1]<=arr[i])
            a.push_back(arr[i]);
        else{
            a.push_back(arr[i]);
            a.push_back(arr[i]);
        }
    }
    // if(arr[n-1]<arr[n-2])
    //     a.push_back(arr[n-1]);
        
    cout << a.size() << endl;
    for(int i=0;i<a.size();++i)
        cout << a[i] <<" ";
    cout << endl;
}

void effsoln(){
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (i && a.back() > x) {
            a.push_back(1);
        }
        a.push_back(x);
    }
    cout << a.size() << "\n";
    for (int el : a)
        cout << el << " ";
    cout << "\n";
}


int main(){
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
        soln();
    return 0;
}