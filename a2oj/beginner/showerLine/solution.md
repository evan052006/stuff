# [Shower Line](https://codeforces.com/problemset/problem/431/B)

- There are only 5! = 120 amount of possible line combinations, we can brute force this with C++ handy std method [next_permutation](https://en.cppreference.com/w/cpp/algorithm/next_permutation.html)
- The method modifies the string to the next permutation, then returns False if the permutation has cycled (NOTE: it is always assumed the lexicographically least valued string is the first permutation, make sure your first permutation is already sorted ascending)

| Time | Pair 1 | Pair 2 | Pair 3 |
| ---- | ------ | ------ | ------ |
| 1    | 1 2    | 3 4    | 5      |
| 2    | 2 3    | 4 5    |        |
| 3    | 3 4    | 5      |        |

| Pair | Count |
| ---- | ----- |
| 1 2  | 1     |
| 4 5  | 1     |
| 2 3  | 2     |
| 3 4  | 2     |

- Now that we know total happiness of each permutation, just calculate it manually 

\*Side note, the index at the code starts from 0, so make sure to decrement by 1
