

/*	nrooted
    11:55pm
 07-02-2023
    12:20am
 08-02-2023*/

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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int i, j;

        for (i = 0, j = n - 1; i < j; i++, j--)
        {
            if ((s[i] - 48) ^ (s[j] - 48) == 0)
                break;
        }
        cout << j - i + 1 << endl;
    }
    return 0;
}