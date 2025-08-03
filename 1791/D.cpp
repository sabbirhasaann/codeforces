/*	nrooted
    12:47am
 07-02-2023
    10:28pm
 24-02-2023
    03:06pm
 03-03-2023*/

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
        string s;
        cin >> n >> s;

        vector<int> freq(26, 0);
        set<char> suffix_set;

        for (char c : s)
        {
            freq[c - 'a']++;
            suffix_set.insert(c);
        }

        set<char> prefix_set;
        int max_sum = 0;

        for (int i = 0; i < n; ++i)
        {
            char c = s[i];
            prefix_set.insert(c);

            freq[c - 'a']--;
            if (freq[c - 'a'] == 0)
                suffix_set.erase(c);

            int curr_sum = prefix_set.size() + suffix_set.size();
            max_sum = max(max_sum, curr_sum);
        }

        cout << max_sum << "\n";
    }

    return 0;
}