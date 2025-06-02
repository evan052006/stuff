# [Xenia and Divisors](https://codeforces.com/problemset/problem/342/A)

- Declare

$A = \\{ a \in \mathbb{Z} \mid 0 < a \leq 7 \\}$

$|A| = n$

$3 \mid n$

- We want to partition into groups of 3, such that

$a < b < c \quad \land \quad a \mid b \quad \land \quad b \mid c \quad \land \quad a \mid c$

| Number | Factors |
| --- | --- |
| 7 | 7 1 |
| 6 | 6 1 2 3 |
| 5 | 5 1 |
| 4 | 4 1 2 |
| 3 | 3 1 |
| 2 | 2 1 |
| 1 | 1 |

Only 6 and 4 satifies for $c$, because we need 2 different factors for $a$ and $b$

- Case 1 : $c = 6$

$a$ must divide 2 factors at once, only 1 satisfies this, therefore $a = 1$
and $b$ can be 2 or 3

- Case 2 : $c = 4$

only $a = 1$ and $b = 2$ satisfies this

to conclude, each partition has 3 possible values.
| a | b | c |
| --- | --- | --- |
| 1 | 3 | 6 |
| 1 | 2 | 6 | 
| 1 | 2 | 4 |

Conditions :
1. every partition must have a 1 therefore A must have exactly n/3 amount of 1
2. every 3 and 4 must have equivalent 6 and 2 in A
3. any values other than 1, 2, 3, 4, 6 must not exist in A

Check steps :
1. check if there are n/3 amount of 1
2. check if there contain values other than 1 2 3 4 6
3. for every 3 and 4, use each number of 6 and 2, (if there not enough, impossible)
4. check if the last few 6 and 2 are equal or not
