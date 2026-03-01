// 2026/03/01 08:07:36
// https://codeforces.com/problemset/problem/977/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n;
    string s;
    cin >> n >> s;

    unordered_map<string,int> twoGram;
    int prev=0, curr=1;
    
    // ++twoGram[s.substr(prev,2)];
    // ++twoGram[{s[prev],s[curr]}];

    // while(curr+1<n){
    //     if((s[prev]!=s[curr] || s[curr] != s[curr+1]))
    //         ++twoGram[{s[curr],s[curr+1]}];
    //     prev = curr;
    //     ++curr;
    // }

    for(int i=1;i<n;++i)
        ++twoGram[{s[i-1], s[i]}];

    int Max = 0;
    string str;

    // for(auto p: twoGram){
    //     if(p.second > Max){
    //         Max = p.second;
    //         str = p.first;
    //     }
    // }
    
    // way 2
    for (const auto& [gram, count] : twoGram) {
        if (count > Max) {
            Max = count;
            str = gram;
        }    
    }
    cout << str;

    

}


int main(){
    ios_base::sync_with_stdio(false);

    int t=1;
    // cin >> t;
    while(t--)
        soln();
    return 0;
}