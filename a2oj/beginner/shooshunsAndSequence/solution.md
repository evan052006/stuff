# [Shooshuns and Sequence](https://codeforces.com/problemset/problem/222/A)

- Given sequence $a_1,a_2,... ,a_n$. Notice that the index after and at $k$ will always be repeated but the index before $k$ is discarded.
- Thus, so that the sequence contain the same numbers, we need to check whether the items after and at $k$ is equal.
- To get the least amount of operations, We discard the first few items so that the sequence contains same numbers. This is equivalent to keeping the last few same numbers directly before $k$
- Be wary of indexing :)
