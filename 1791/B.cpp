/*	nrooted
    11:39pm
    11:48pm
 07-02-2023*/

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <iomanip>
#include <map>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, x = 0, y = 0;
        cin >> n;
        string s;
        cin >> s;
        int flag = 0;
        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] == 'U')
                y += 1;
            else if (s[i] == 'D')
                y -= 1;
            else if (s[i] == 'L')
                x -= 1;
            else if (s[i] == 'R')
                x += 1;

            if (x == 1 && y == 1)
                break;
        }
        if (x == 1 && y == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}