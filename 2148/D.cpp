// 2026/02/12 10:47:27
// https://codeforces.com/problemset/problem/2148/D

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void soln()
{
    int n;
    cin >> n;
    vector<int> odd, even;
    long long sum = 0;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        if(x&1)
            odd.push_back(x);
        else
            even.push_back(x);
    }

    if(odd.empty())
    {
        cout << sum << endl;
        return;
    }

    sort(odd.begin(), odd.end());
    int len = odd.size();

    for(int x: even)
        sum += x;

    for(int i=len/2;i<len;++i)
        sum += odd[i];
    cout << sum << endl;


}


int main(){
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
        soln();
    return 0;
}