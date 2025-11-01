// 2025/11/01 23:23:39

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void soln()
{
    int n,k,x;
    cin >> n >> k >> x;
    vector<int> arr(n);

    for(int i=0;i<n;i++)
        cin >> arr[i];
    arr.push_back(-1e9);
    arr.push_back(1e9);

    n += 2;
    sort(arr.begin(), arr.end());

    int l = 0, r = x + 1;
    while(l+1 < r){
        int m = (l + r) >> 1, f = 0;
        arr[0] = -m;
        arr[n - 1] = x + m;
        for(int i=1;i<n;i++)
            f+= max(0, (arr[i] - m) - (arr[i-1] + m) + 1);
        if(f >= k)
            l = m;
        else
            r = m;
    }

    arr[0] = -l;
    arr[n-1] = x + l;
    int j = 0;
    for(int i=1;i<n;i++)
        for(j = max(j, arr[i-1] + l); j<= min((arr[i] - l), x) && k; j++)
            cout << j <<" ", k--;
    cout << '\n';

}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while(t--)
        soln();
    return 0;
}