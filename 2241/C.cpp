// 2026/07/23 15:25:40
// https://codeforces.com/problemset/problem/2241/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
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

/*input
4
4
0000
3
110
6
110011
6
101100

*/

/*output
1
2
1
1

*/

/*
Read the statement.
Restate the problem.
Extract constraints.
Make observations.
Experiment with tiny examples.
Form one or more hypotheses.
Attack the hypotheses with counterexamples.
Write a proof sketch.
Design the algorithm.
Only then write code.
*/

/*
Step 1. Problem

Input:

Output:

Operations:

Constraints:
*/

/*
Step 2. Make observations

Observation 1:

Observation 2:

Observation 3:

Observation 4:

Observation 5:
*/

/*
Step 3. Guess an algorithm
Why?
"Why can't the optimal solution do something different here?"
*/

/*
Step 9. Form a hypothesis
*/

/*
Step 10. Attack the hypothesis
*/

/*
Step 4. Attack your own idea

*/

/*
Step 11. Try to break it
*/

/*
Step 5. Prove it(Not yet)
Only after every attempt fails do we start asking:

Why did it always work?
*/

/*
Counterexample Attempt:
Why did it fail?
*/

/*
Step 13. Make the hypothesis precise
*/

/*
Step 16. Don't trust it yet

Even if you think you've found the construction, don't celebrate.
*/

/*
6. Implementation plan

Only now do you write something like:

Implementation Plan

1. Generate the first n−1 prime numbers.
2. Construct the first element.
3. For every middle element, compute it using the neighboring primes.
4. Construct the last element.
5. Output the sequence.

*/

/*
Time Complexity:


*/

/*
Mistakes:
*/

/*

Problem

↓

Understanding

↓

Observations

↓

Hypothesis

↓

Counterexample Search

↓

Proof

↓

Implementation Plan

↓

Complexity

↓

Code

*/

/*

Step 1. Before looking at the code

Whenever you finish coding, ask yourself these three questions:

Does my code implement my proof?
Can I prove every adjacent gcd?
Can I prove there are no hidden cases?

Let's answer them.

*/