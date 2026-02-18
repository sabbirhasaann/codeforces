// 2026/02/18 12:05:15
// https://codeforces.com/problemset/problem/580/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int maxim = 1,cnt = 1;
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
        cin >> arr[i];
    for(int i=0;i<n-1;++i){
        if(arr[i]<=arr[i+1])
            maxim = max(maxim, ++cnt);
        else
            cnt = 1;
    }
    cout << maxim << endl;
}

void soln1() {
    int n;
    if (!(cin >> n)) return;
    
    int maxim = 1, cnt = 1;
    int prev, current;
    
    cin >> prev; // Read the first element
    for (int i = 1; i < n; i++) {
        cin >> current;
        if (current >= prev) {
            cnt++;
            maxim = max(maxim, cnt);
        } else {
            cnt = 1;
        }
        prev = current;
    }
    cout << (n == 0 ? 0 : maxim) << endl;
}

void soln2() {
    int n;
    cin >> n;
    if (n == 0) { cout << 0 << endl; return; }
    
    vector<int> arr(n);
    for (int &x : arr) cin >> x;

    int maxim = 1, cnt = 1;
    for (auto it = arr.begin() + 1; it != arr.end(); ++it) {
        // Using iterators and ternary for conciseness
        cnt = (*it >= *(it - 1)) ? cnt + 1 : 1;
        if (cnt > maxim) maxim = cnt;
    }
    cout << maxim << endl;
}


struct Result {
    int maxLen;    // Longest non-decreasing subarray in this range
    int preLen;    // Longest non-decreasing subarray starting from the left
    int sufLen;    // Longest non-decreasing subarray ending at the right
    int size;      // Total size of this range
};

Result solve(const vector<int>& arr, int low, int high) {
    // Base Case: Only one element
    if (low == high) {
        return {1, 1, 1, 1};
    }

    int mid = low + (high - low) / 2;

    // Recursively solve left and right halves
    Result left = solve(arr, low, mid);
    Result right = solve(arr, mid + 1, high);

    Result res;
    res.size = left.size + right.size;

    // 1. Calculate Prefix Length
    res.preLen = left.preLen;
    if (left.preLen == left.size && arr[mid] <= arr[mid + 1]) {
        res.preLen += right.preLen;
    }

    // 2. Calculate Suffix Length
    res.sufLen = right.sufLen;
    if (right.sufLen == right.size && arr[mid] <= arr[mid + 1]) {
        res.sufLen += left.sufLen;
    }

    // 3. Calculate Maximum Length
    res.maxLen = max(left.maxLen, right.maxLen);
    if (arr[mid] <= arr[mid + 1]) {
        res.maxLen = max(res.maxLen, left.sufLen + right.preLen);
    }

    return res;
}

void soln3() {
    int n;
    if (!(cin >> n) || n == 0) return;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    Result finalResult = solve(arr, 0, n - 1);
    cout << finalResult.maxLen << endl;
}

int main(){
    ios_base::sync_with_stdio(false);

    int t=1;
    // cin >> t;
    while(t--)
        soln();
    return 0;
}