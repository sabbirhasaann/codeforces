#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, track = 0;
        cin >> n;
        vector<int> v(n);
        unordered_map<int, int> um;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            um[v[i]]++;
        }

        for (auto i : um)
            if (i.second >= 3)
                track += (i.second / 3);
        cout << track << endl;
    }
}