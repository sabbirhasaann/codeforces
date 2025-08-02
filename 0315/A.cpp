#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void soln()
{
    int n;
    cin >> n;
    vector<vector<int>> bottles(n, vector<int>(2));
    vector<bool> opened(n, false);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        bottles[i][0] = a;
        bottles[i][1] = b;
    }

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;
            if (bottles[i][0] == bottles[j][1])
                opened[i] = true;
        }
    for (int i = 0; i < n; i++)
        if (!opened[i])
            count++;
    cout << count << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    t = 1;
    while (t--)
        soln();
    return 0;
}