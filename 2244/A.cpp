// 2026/08/04 07:26:34
// https://codeforces.com/problemset/problem/2244/A

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

    int mLen = 0, cnt = 0;
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == '#')
        {
            cnt++;
            mLen = max(mLen, cnt);
        }
        else
            cnt = 0;
    }

    cout << (mLen + 1) / 2 << endl;
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
7
#*##*##
8
########
8
********
8
#*****##
6
*#####




output
1
4
0
1
3



Step 1. Restate the problem

There are several drawings.

A drawing is a maximal consecutive segment of '#'.

Every second, 1 cm is erased from the left end and
1 cm is erased from the right end simultaneously.

Different drawings are erased independently.

Find the maximum time required among all drawings.





Step 2. Extract constraints


Input:
Test Case (t)
-> Integer (n)
-> String (n len)

Output:
Single integer — the maximum time required to erase
a line.

Operations:
Erase 1 centimeters (one '#' character) from left and
right simultaneously


Constraints:
t -> 1 <= t <= 2500
n -> 1 <= n <= 10

Brute force would even work.
But we should still search for the underlying property
instead of relying on the small constraint.

s -> length n


Step 3. Make observations


Observation 1:
A drawing is simply one continuous block of '#'.

Example
##*###*#

drawings:

##
###

#

Observation 2:

Suppose a drawing length is

Example 1
1
#
↓
.

Time
1

Example 2
2
##
↓
..

Time
1

Example 3
3
###
↓
.#.
↓
...

Time
2

Example 4
4
####
↓
.##.
↓
....

Time
2

Example 5
5
#####
↓
.###.
↓
..#..
↓
.....

Time
3

Observation 3:
Let's build the table

Length   Time
1        1
2        1
3        2
4        2
5        3
6        3
7        4
8        4

Pattern:
Every two lengths have the same answer.

Observation 4:
The answer equals

ceil(length / 2)

Equivalent forms

(length + 1) / 2

(integer division)

Observation 5:
Since every drawing is erased independently,

the overall answer is simply

maximum time among all drawings

↓

maximum drawing length

↓

(maxLength + 1) / 2

This completely removes the need to simulate erasing.


Step 4. Form a hypothesis
Only the longest consecutive '#' segment matters.

If its length is L,

the answer is

ceil(L / 2).




Step 5. Attack the hypothesis

Example 1
########

length = 8

answer = 4

simulation:

########
.######.
..####..
...##...
........

4

Correct.

Example 2
#

length = 1

answer = 1

Correct.

Example 3
##

length = 2

answer = 1

Correct.

Example 4
###*

Longest = 3

Answer = 2

Simulation:

###
.#.
...

2

Correct.

Example 5
##*####

Longest = 4

Answer = 2

Correct.




Step 6. Try to break it
Try edge cases.

Case 1
********

No drawing.

Longest = 0

Answer = 0

Correct.

Case 2
#

Answer = 1

Correct.

Case 3
*#####*

Longest = 5

Answer = 3

Correct.

Case 4
#*#*#

Longest = 1

Answer = 1

Correct.

No counterexample found.




Step 7. Prove it(Not yet)

For a drawing of length L:

Every second,

one cell disappears from the left
one cell disappears from the right

Therefore after t seconds,

2t cells

(or 2t−1 if they meet)

have disappeared.

The drawing disappears exactly when the two erasing fronts meet.

Thus

time = ceil(L / 2)

Since drawings are independent,

the maximum completion time is obtained by the longest drawing.

Step 8. Counterexample Attempt:


Try to find a situation where

shorter drawing

takes longer

than longer drawing

Impossible.

Because

ceil(L/2)

is monotonically increasing.

Therefore the hypothesis survives.


Step 9. Make the hypothesis precise

Let

L = maximum consecutive '#'.

Answer

=

(L + 1) / 2.




Step 10. Don't trust it yet

Ask yourself

Empty drawing?
One drawing?
Many drawings?
Longest at beginning?
Longest at end?
All '#'
All '*'

Works for all.

Step 11. Guess an algorithm


Traverse the string once.

Maintain

currentLength

Whenever '#'

currentLength++

Update maximum.

Whenever '*'

currentLength = 0

Finally

print

(maxLength + 1) / 2

Why is this optimal?

Because

Every drawing contributes only its length.
No other information matters.
So scanning once extracts all necessary information.

Step 12. Implementation plan
maxLength = 0
current = 0

for each character

    if '#'

        current++

        maxLength = max(maxLength,current)

    else

        current = 0

print

(maxLength+1)/2


Step 13. Time Complexity:

Scanning string once

O(n)

Memory

O(1)


Step 14. Mistakes:

Possible mistakes:

1. Forgetting to reset current after '*'.

2. Using maxLength / 2

instead of

(maxLength + 1) / 2.

3. Thinking the answer is the total number of '#'.

4. Simulating the erasing process unnecessarily.

5. Forgetting the case where there are no '#'.



Step 15. Before looking at the code

Whenever you finish coding, ask yourself these three questions:

Ask yourself:

Does my code implement my proof?

Yes.

The proof only requires the maximum consecutive block.

Does every variable have a mathematical meaning?
current

=

current block length

maxLength

=

maximum block length
Can hidden cases exist?

No.

Every character belongs to exactly one block or is a separator.

Therefore every possible drawing is processed exactly once.
*/