// 2026/02/15 20:01:06
// https://codeforces.com/problemset/problem/2195/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void soln() {
    int n;
    cin >> n;
    vector<int> arr(n + 1);
    for(int i = 1; i <= n; i++) cin >> arr[i];

    for(int i = 1; i <= n; i++) {
        
        int root_of_index = i;
        while (root_of_index % 2 == 0) root_of_index /= 2;

        int root_of_value = arr[i];
        while (root_of_value % 2 == 0) root_of_value /= 2;

        if (root_of_index != root_of_value) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}


void soln1(){
    int n;
    cin >> n;
    vector<int> arr(n+1);
    for(int i=1;i<=n;i++)
        cin >> arr[i];
    int i=1;
    while(i<=n){
        int j=i;
        while(j<=n){
            if(i==1){
                if(arr[j]!=1 && arr[j]%2 != 0){
                    cout << "NO\n";
                    return;
                }
            }
            else{
                if(arr[j]%i != 0){
                    cout << "NO\n";
                    return;
                }

            }
            j*=2;
        }
        i+=2;
    }
    cout << "YES\n";
}

void soln2(){
    int n;cin>>n;
    vector<int>a(n+1);
    for(int i=1;i<=n;i++)
    {
      cin>>a[i];
    }
    for(int i=1;i<=n;i+=2)
    {
      for(int j=i;j<=n;j*=2)
      {
        for(int k=i*2;k<=n;k*=2)
        {
          if(a[k/2]>a[k])swap(a[k/2],a[k]);
        }
      }
    }
    if(is_sorted(begin(a),end(a)))cout<<"YES\n";
    else cout<<"NO\n";
}

int main(){
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
        // soln();
        soln1();

    return 0;
}

/*in
2
5
1 4 3 2 5
5
1 4 2 3 5
*/

/*out
YES
NO
*/