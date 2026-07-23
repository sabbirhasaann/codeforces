// 2026/07/23 20:09:16
// https://codeforces.com/problemset/problem/2241/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'

void soln()
{
    int n;
    string s;
    cin >> n >> s;

    int partition = 0;
    for (int i = 0; i < n - 1; ++i)
        if (s[i] != s[i + 1])
            partition++;
    (partition == 0 || partition > 1) ? cout << 1 << endl : cout << 2 << endl;
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
input:

4
4
0000
3
110
6
110011
6
101100

output:

1
2
1
1




Step 1. Restate the problem

I have given a binary string s. I will find a pallindromic
substring and then delete one character from the choosen
substring. Apply this operation any numbers of time and
return or print the minimum possible length after the operation.




Step 2. Extract constraints


Input:
a single integer n (length of the binary strings) and string s.

Output:
print minimum possible length after the operations

Operations:
1. Choose a palindromic substring and remove one character
from the choosen substring.
2. any number of times

Constraints:
Test case t -> 1<= t <= 100
Int n -> 1<= n <= 100
time 1s



Step 3. Make observations


Observation 1:
Seeing the constriants which are small enough and it seems like a
bruteforce algorithm and greedy algorith will be suit on it.


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