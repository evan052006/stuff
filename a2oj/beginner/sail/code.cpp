#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, x1, x2, y1, y2, dx, dy;
    string input;
    cin >> t >> x1 >> y1 >> x2 >> y2 >> input;
    dx = x2 - x1;
    dy = y2 - y1;
    for (int i = 0; i < input.size(); i++) {
        if (dy < 0 && input[i] == 'S') {
            dy++;
        } else if (dy > 0 && input[i] == 'N') {
            dy--;
        } else if (dx < 0 && input[i] == 'W') {
            dx++;
        } else if (dx > 0 && input[i] == 'E') {
            dx--;
        }
        if (dx == 0 && dy == 0) {
            cout << i + 1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}
