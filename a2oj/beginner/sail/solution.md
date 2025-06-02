# [Sail](https://codeforces.com/problemset/problem/298/B)

- The boat can only move in adjacent directions
- Thus, to get to the end point, we only need to move in 2 directions to actually get closer to the end
- dx and dy in the code represents the distance but without absolute (so now we know if dx is negative, the endpoint is on the left side. likewise applies to dy)
- The sign of dx and dy tells us how far it is to reach the end point (such that both dx and dy is 0)
- We only move our boat when the direction favors the dx and dy direction to our end point
- dx = 0 and dy = 0 implies we reached our destination
