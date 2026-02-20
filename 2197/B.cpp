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
void soln() // two pointer base solution
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

void soln1(){ // poistion mapping based solution
    int n;
    cin >> n;
    vector<int> p(n), a(n),pos(n + 1);
    for(int i=0;i<n;i++){
        cin >> p[i];
        pos[p[i]]= i;
    }
    for(int i=0;i<n;i++)
        cin >> a[i];
    for(int i=0;i<n-1;++i){
        if(a[i] != a[i+1])
        {
            if(pos[a[i]]>pos[a[i+1]]){
                cout <<"NO\n";
                return;
            }
        }
    }
    cout <<  "YES\n";
}

void soln2(){ // stack based solution
    int n;
    cin >> n;
    vector<int> p(n), a(n);
    for(int i=0;i<n;i++){
        cin >> p[i];
    }
    for(int i=0;i<n;i++)
        cin >> a[i];

    // Step 1: Reduce 'a' using a stack to remove consecutive duplicates
    stack<int> s;
    for (int i = 0; i < n; ++i) {
        if (s.empty() || s.top() != a[i]) {
            s.push(a[i]);
        }
    }

    // Step 2: Match the stack against 'p' from right to left
    // Because the stack is LIFO, the top of the stack is the LAST unique element of 'a'
    int p_ptr = n - 1;
    while (p_ptr >= 0 && !s.empty()) {
        if (p[p_ptr] == s.top()) {
            s.pop(); // Found a match for the current required element
        }
        p_ptr--; // Move backwards through the permutation
    }

    // If the stack is empty, we matched all required elements in order
    if (s.empty()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}


int main(){
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
        // soln();
        // soln1();
        soln2();


    return 0;
}