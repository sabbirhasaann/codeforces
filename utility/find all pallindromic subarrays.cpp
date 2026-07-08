#include <bits/stdc++.h>
using namespace std;

bool checkPallindrome(vector<int> &a, int i, int j)
{
    while (i < j)
    {
        if (a[i] != a[j])
            return false;
        ++i;
        --j;
    }
    return true;
}

void printPalindrome(vector<int> &a, int i, int j)
{
    while (i <= j)
    {
        cout << a[i] << " ";
        ++i;
    }
    cout << endl;
}

void allPalindroicSubarrays(vector<int> &a)
{
    int n = a.size();
    for (int i = 0; i < n; ++i)
    {
        for (int j = i; j < n; ++j)
        {
            if (checkPallindrome(a, i, j))
                printPalindrome(a, i, j);
        }
    }
}

int main()
{
    vector<int> a = {1, 2, 0, 3, 3, 0, 2, 1};
    allPalindroicSubarrays(a);
}

/*in
6
4
1 2 0 3 3 0 2 1
2
0 1 0 1
2
1 1 0 0
3
2 0 2 1 1 0
4
0 1 3 0 3 1 2 2
3
0 1 2 1 0 2
*/

/*out
 */