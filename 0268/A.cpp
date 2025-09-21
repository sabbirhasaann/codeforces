/*	nrooted
    09:50am
    10:00am
 09-01-2023*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    int h[n], a[n];
    for (int i = 0; i < n; i++)
        cin >> h[i] >> a[i];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j && h[i] == a[j])
            {
                count++;
            }
        }
    }
    cout << count;
    return 0;
}