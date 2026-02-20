// 2026/02/11 20:09:45
// https://codeforces.com/problemset/problem/2197/B

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
int removeConsecutiveDuplicateInPlace(vector<int> &a){
    int n = a.size(),k=1;
    
    for(int i=1;i<n;++i){
        if(a[i-1] != a[i]){
            a[k] = a[i];
            ++k;
        }
    }
    
    return k;
}
void soln()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for(int i=0;i<n;i++)
        cin >> a[i];
    for(int i=0;i<n;i++)
        cin >> b[i];

    int m = removeConsecutiveDuplicateInPlace(b);
    int i=0, j=0;
    while (i<n && j<m)
    {
        if(a[i]==b[j]){
            ++i;
            ++j;
        }
        else
            ++i;
    }
    
    if(j==m)
        cout <<"YES\n";
    else
        cout <<"NO\n";
}   


int main(){
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
        soln();
    return 0;
}