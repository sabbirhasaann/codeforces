// 2026/02/17 21:04:20
// https://codeforces.com/problemset/problem/208/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'

void soln()
{
    string s, t = "WUB", str;
    cin >> s;
    int n = s.length(), i = 0;
    int m = t.length(), j = 0;
    
    while(i<n){
        if(j==m){
            j = 0;
            if (str.size() > 0 && str.back() != ' ')
                str += ' ';
        }
        if(s[i]==t[j]){
            ++i;
            ++j;
        }
        else{
            
            i = i - j;
            j = 0;
            str += s[i];
            ++i;
        }
    }
    if(j==1)
        str += s[n-1];
    if(j == 2){
        str += s[n-2];
        str += s[n-1];
    }

    cout << str << endl;
}


void soln1() {
    string s;
    cin >> s;
    string target = "WUB";
    size_t pos = s.find(target);
    
    // Replace every occurrence of "WUB" with a space
    while (pos != string::npos) {
        s.replace(pos, 3, " ");
        pos = s.find(target, pos + 1);
    }
    
    // Note: You might need to clean up extra spaces 
    // using a unique/stringstream approach.
    cout << s << endl;
}

void soln2() {
    string s;
    cin >> s;
    bool isFirstWord = true;

    for (int i = 0; i < s.length(); i++) {
        // Check if the current position starts with "WUB"
        if (i + 2 < s.length() && s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B') {
            i += 2; // Skip the 'U' and 'B', the loop increment skips 'W'
            if (!isFirstWord) {
                // We use a flag to ensure we don't print 
                // multiple spaces between words
                isFirstWord = false; 
            }
            continue;
        } else {
            // Logic to handle spacing correctly
            // (Only print a space if we've already printed a word)
            // ... printing logic ...
            cout << s[i];
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);

    int t=1;
    // cin >> t;
    while(t--)
        soln();
        // soln1();
        // soln2();

    return 0;
}