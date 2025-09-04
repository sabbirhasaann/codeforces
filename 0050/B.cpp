// 2025/09/04 21:06:48

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void soln()
{
    string s;
    long long sum = 0;
    cin >> s;

    unordered_map<char, int> freq;
    for (char ch : s)
        freq[ch]++;

    for (pair<char, int> x : freq)
        sum += pow(x.second, 2);
    cout << sum << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    soln();
    return 0;
}