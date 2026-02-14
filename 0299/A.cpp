// 2026/02/14 12:57:00
// https://codeforces.com/problemset/problem/299/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int gcd(int a,int b){
    if(b == 0)
        return a;
    return gcd(b, a%b);
}

int binary_search(vector<int> &arr, int search_key)
{
    int i = 0;
    int j = arr.size() - 1;
    while (i <= j)
    {
        int mid = i + (j - i) / 2;
        if (arr[mid] == search_key)
            return mid;
        else if (arr[mid] > search_key)
            j = mid - 1;
        else
            i = mid + 1;
    }
    return -1;
}

void soln()
{
    int n,GCD;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end());
    GCD = arr[0];
    for(int i=1;i<n;++i)
        GCD = gcd(GCD,arr[i]);
    
    if(binary_search(arr,GCD) != -1)
        cout << GCD << endl;
    else
        cout << -1 << endl;
}

void effsoln(){
    int n;
    cin >> n;

    vector<int> a(n);
    int min_val = 2e9;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] < min_val) {
            min_val = a[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if (a[i] % min_val != 0) {
            cout << -1 << endl;
            return;
        }
    }

    cout << min_val << endl;
}

int main(){
    ios_base::sync_with_stdio(false);

    int t=1;
    // cin >> t;
    while(t--)
        // soln();
        effsoln();
    return 0;
}