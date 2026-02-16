// 2026/02/16 13:25:47
// https://codeforces.com/problemset/problem/118/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void soln()
{   
    string s,t;
    cin >> s;
    for(char c: s)
    {
        char lc = c | 32;
        
        if(lc != 'a' && lc != 'e' && lc!='i' && lc !='o' && lc != 'u' && lc != 'y')
            t = t + '.' + lc;
    }
    cout << t << endl;
}

void effsoln() {
    string s;
    if (!(cin >> s)) return;

    string t;
    // 1. Optimization: Reserve space to prevent multiple memory reallocations
    t.reserve(s.length() * 2);

    for (char c : s) {
        // 2. Convert to lowercase
        char lc = (c <= 'Z' && c >= 'A') ? (c + 32) : c;

        // 3. Efficient Vowel Check using a switch (often faster than multiple ORs)
        switch (lc) {
            case 'a': case 'e': case 'i': 
            case 'o': case 'u': case 'y':
                continue;
            default:
                // 4. In-place addition is O(1) amortized
                t += '.';
                t += lc;
        }
    }
    cout << t << endl;
}


int main(){
    ios_base::sync_with_stdio(false);

    int t=1;
    // cin >> t;
    while(t--)
        soln();
    return 0;
}