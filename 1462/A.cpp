// 2026/03/14 10:23:59
// https://codeforces.com/problemset/problem/1462/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'

void printArray(vector<int> &v)
{
    for (int x : v)
        cout << x << " ";
    cout << endl;
}

void soln()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for(int i=0;i<n;++i)
        cin >> a[i];

    int i=0,j=0;
    while(j<n){
        b[j] = a[i];
        ++i;
        j+=2;
    }
    i = n - 1,j=1;
    while(j<n){
        b[j] = a[i];
        --i;
        j+=2;
    }

    printArray(b);

}

void solve() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int &e : v) {
    cin >> e;
  }
  int left = 0, right = n - 1;
  vector<int> ans(n);
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      ans[i] = v[left++];
    } else {
      ans[i] = v[right--];
    }
  }
  for (int i : ans) {
    cout << i << " ";
  }
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


/*input
6
7
3 4 5 2 9 1 1
4
9 2 7 1
11
8 4 3 1 2 7 8 7 9 4 2
1
42
2
11 7
8
1 1 1 1 1 1 1 1
*/

/*output
3 1 4 1 5 9 2 
9 1 2 7 
8 2 4 4 3 9 1 7 2 8 7 
42 
11 7 
1 1 1 1 1 1 1 1 
*/