/*	nrooted
    11:22pm
 07-02-2023*/

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <iomanip>
#include <map>
using namespace std;

int main()
{
    string str;
    str = "codeforces";

    int n;
    cin >> n;
    while (n--)
    {
        int flag = 0;
        char ch;
        cin >> ch;
        for (int j = 0; str[j] != '\0'; j++)
        {
            if (str[j] == ch)
            {
                flag = 1;
                break;
            }
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}