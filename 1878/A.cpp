// 2026/03/06 09:10:10
// https://codeforces.com/problemset/problem/1878/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n,k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
        cin >> arr[i];
    for(int i=0;i<n;++i){
        for(int j=i;j<n;++j){
            int cntk = 0, cnto = 0;
            for(int l=j;l<=i;++l){
                if(arr[l]==k)
                    ++cntk;
                else
                    ++cnto;
            }
            if(cntk>cnto)
            {
                YES;
                return;
            }
        }
    }
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