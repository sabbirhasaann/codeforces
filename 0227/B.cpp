#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void soln()
{
    int n, m;
    long long vasya = 0, petya = 0;
    cin >> n;
    vector<int> pos(n);

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        pos[x - 1] = i + 1;
    }

    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        int idx = pos[x - 1];
        vasya += idx;
        petya += (n - idx + 1);
    }
    cout << vasya << " " << petya << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    while (t--)
        soln();
    return 0;
}