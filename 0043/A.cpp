// 2026/02/21 18:59:47
// https://codeforces.com/problemset/problem/43/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln() {
    int n, count = 0;
    cin >> n;
    string team1, team2, temp;
    
    for (int i = 0; i < n; ++i) {
        cin >> temp;
        if (i == 0) team1 = temp;
        
        if (temp == team1) count++;
        else {
            team2 = temp;
            count--;
        }
    }
    
    cout << (count > 0 ? team1 : team2) << endl;
}
void solnInefficient() // efficient for n number of teams
{ 
    int n,maxGoal=INT_MIN;
    string winner;
    cin >> n;
    unordered_map<string,int> teams;
    for(int i=0;i<n;++i)
    {
        string s;
        cin >> s;
        ++teams[s];
    }
    
    for(auto it : teams)
    {
        if(it.second > maxGoal)
        {
            maxGoal = it.second;
            winner = it.first;
        }
    }
    cout << winner << endl;

}


int main(){
    ios_base::sync_with_stdio(false);

    int t=1;
    // cin >> t;
    while(t--)
        soln();
    return 0;
}