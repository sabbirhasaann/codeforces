// 2026/07/25 21:03:59
// https://codeforces.com/problemset/problem/2242/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'

void soln()
{
    int n, zero1 = 0, one2 = 0;
    cin >> n;
    bool isSame = true;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        if (a[i] == 0)
            zero1++;
    }
    int mismatched = 0;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        if (x == 1)
            one2++;
        if (a[i] != x)
        {
            isSame = false;
            if (a[i] == 1)
                mismatched++;
        }
    }

    if (isSame)
        cout << 0 << endl;

    else if (zero1 == n || one2 == n)
        cout << -1 << endl;

    else if (mismatched % 2 == 1)
        cout << 1 << endl;
    else
        cout << 2 << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--)
        soln();
    return 0;
}

/*
input
5
1
0
0
2
1 0
0 1
3
1 1 1
0 0 0
4
1 0 1 0
0 1 0 1
5
1 0 1 0 1
1 1 1 1 1



output
0
1
1
2
-1



Step 1. Restate the problem





Step 2. Extract constraints


Input:

Output:

Operations:

Constraints:



Step 3. Make observations


Observation 1:

Observation 2:

Observation 3:

Observation 4:

Observation 5:



Step 4. Form a hypothesis





Step 5. Attack the hypothesis





Step 6. Try to break it





Step 7. Prove it(Not yet)

Only after every attempt fails do we start asking:
Why did it always work?


Step 8. Counterexample Attempt:


Why did it fail?


Step 9. Make the hypothesis precise




Step 10. Don't trust it yet


Even if you think you've found the construction, don't celebrate.


Step 11. Guess an algorithm


Why?
"Why can't the optimal solution do something different here?"


Step 12. Implementation plan


Step 13. Time Complexity:





Step 14. Mistakes:




Step 15. Before looking at the code


Whenever you finish coding, ask yourself these three questions:

Does my code implement my proof?
Can I prove every adjacent gcd?
Can I prove there are no hidden cases?
*/