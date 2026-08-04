```
input
7
3
1 2 3
3
1 1 2
3
10 1 1
3
2 2 2
4
1 4 2 2
5
8 2 8 1 8
4
1 1 3 5



output
YES
NO
YES
YES
NO
YES
NO



Step 1. Restate the problem

We have n stacks of books.

We may repeatedly move one book from stack i
to stack i+1 (only to the right).

Determine whether it is possible to transform
the array into a strictly increasing sequence.

Notice the important part:
Books can only move to the right.



Step 2. Extract constraints


Input:
Test Case (t)
An integer (n)
An array of n elements (a1...an)

Output:
output "YES" if Yura can make the
arrangement neat, and "NO" otherwise.

Operations:

-> Choose a stack 𝑖 such that 1 <= 𝑖 < n and a𝑖>1.
-> Take 1 book from the top of stack i, so a𝑖 decreases by 1.
-> Put this book on top of stack i+1, so a𝑖+1 increases by 1.

Constraints:
Test case
1 <= t <= 10^4
1 <= n <= 2 * 10^5
1 <= ai <= 10^9

It is guaranteed that the sum of 𝑛 over all test cases
does not exceed 2⋅10^5.

n is large (2×10^5 total).
An O(n²) simulation is impossible.
We need an O(n) or O(n log n) solution.

Step 3. Make observations


Observation 1:
Books can never move left.

Example
5 1
↓
4 2
↓
3 3

We can only push books toward larger indices.
Therefore,

Every decision at index i only affects
positions i and greater.

Observation 2:
Each stack must contain at least one book.

Operation requires
a[i] > 1

So we can never make a stack zero.

Minimum possible value of every position is 1

Observation 3:
Suppose we are fixing position i.

Since the final array must satisfy
a1 < a2 < a3 < ...

the smallest value position i can finally have is i+1

Example
1 2 3 4 5

Any smaller would make a strictly increasing sequence impossible.

Observation 4:
If a[i] > i+1

those extra books are never useful at position i.

Keeping them only makes satisfying
a[i] < a[i+1]

harder.

Therefore,

We should push every unnecessary book
to the right immediately.

This is the key greedy observation.

Observation 5:
After minimizing position i,

if

a[i] >= a[i+1]

then we already failed.

Why?

Because

we cannot decrease a[i] anymore
we cannot increase a[i+1] except using books from the left
but we've already moved every possible book

So nothing later can fix this inversion.



Step 4. Form a hypothesis
Process the array from left to right.

At each position,

leave exactly the minimum amount
needed there (i+1 books),

and move every extra book right.

If after doing this,
a[i] is still not smaller than a[i+1],

then the answer is NO.

Otherwise YES.




Step 5. Attack the hypothesis

Test several examples.

Example
10 1 1

Position 1 needs only 1 Move 9
↓
1 10 1

Position 2 needs 2 Move 8
↓
1 2 9

Strictly increasing.
YES.

Example
2 2 2

Position 1 needs 1
↓
1 3 2

Position 2 needs 2
↓
1 2 3

YES.

Example
1 1 2

Position 1 cannot give books.
Position 2 already 1 ≥ 2 ?

No.


But

1 1 2
is not strictly increasing.

No operation fixes it.

NO.



Step 6. Try to break it

Edge cases.

1

Already increasing.

YES.

100

One stack.

Always YES.

1 1000000000

Already increasing.

YES.

1 1

Impossible.

NO.

5 1

Can only move right.

Never left.

NO.

Everything agrees.



Step 7. Prove it(Not yet)

We prove the greedy.

Suppose we are processing position i.

The smallest value position i may have in any strictly increasing array is

i+1.

Keeping more books at position i cannot help later because

books only move right
extra books only make
a[i] < a[i+1]

harder.

Therefore,

removing every removable extra book immediately is always optimal.

After this reduction,

if

a[i] ≥ a[i+1]

then no future operation can change

a[i]

or send books backward.

Thus the inequality can never become true.

Hence we must answer NO.

Otherwise we continue.


Step 8. Counterexample Attempt:
Can moving fewer books ever help?

Example

5 3 100

Keep

2

extra books?

No.

Those books only increase

a1

making

a1 < a2

harder.

Moving them right only helps.

No counterexample exists.

Step 9. Make the hypothesis precise
For every position

0 ≤ i < n−1
minimum allowed value

=

i+1

If

a[i] > i+1

move

a[i]-(i+1)

books right.

Then verify

a[i] < a[i+1].



Step 10. Don't trust it yet


Check

first element
last element
already sorted
impossible case
huge values
all equal
n=1

Everything behaves correctly.

Step 11. Guess an algorithm
Scan left to right.

For every position

if there are extra books

    move them right

after that

    if current >= next

        answer NO

If scan finishes

answer YES.

Step 12. Implementation plan
Read array.

For i = 0 ... n−2

    if a[i] > i+1

        extra = a[i]-(i+1)

        a[i]-=extra

        a[i+1]+=extra

    if a[i] >= a[i+1]

        NO

YES


Step 13. Time Complexity:
One pass

O(n)

Memory

O(1)

(or O(n) because input array is stored)


Step 14. Mistakes:
1. Forgetting books only move right.

2. Forgetting the minimum possible value
   at index i is i+1.

3. Comparing before moving extra books.

4. Thinking we should maximize a[i].

5. Forgetting the final adjacent comparison.




Step 15. Before looking at the code

Ask yourself:

Does my code implement my proof?

Yes.

Every index is minimized greedily before checking the next.

Does every variable have a mathematical meaning?
extra

=

books that can never stay here
in any optimal arrangement.
Can hidden cases exist?

No.

Once index i is processed, it will never change 
again because books cannot move left. Therefore each 
position can be finalized exactly once.

```