// 2025/07/27 17:33:20

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void soln()
{
    string s;
    cin >> s;
    int n = s.size();

    if (n == 2)
        cout << s[1] << endl;
    else
        cout << *min_element(s.begin(), s.end()) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
        soln();
    return 0;
}