// 2026/01/19 14:05:00

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void soln()
{
    int n, m, h;
    cin >> n >> m >> h;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    

    vector<int> A = a;
    vector<int> p;

    while (m--)
    {
        int x, y;
        cin >> x >> y;
        --x;
        
        p.push_back(x);
        a[x] += y;

        if (a[x] > h)
        {
            for (int idx : p)
                a[idx] = A[idx];
            p.clear();
        }
    }

    for (int i = 0; i < n; i++)
        cout << a[i] <<" ";
    
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--)
        soln();

    return 0;
}