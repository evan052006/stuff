#include <bits/stdc++.h>
using namespace std;

int main()
{
    const int ALPHABET_SIZE = 26;
    int count[ALPHABET_SIZE], oddCharAmount = 0;
    string input;
    cin >> input;
    memset(count, 0, sizeof(count));
    for (int i = 0; i < input.size(); i++) {
        count[input[i] - 'a']++;
    }
    for (int i = 0; i < ALPHABET_SIZE; i++) {
        if (count[i] % 2 == 1) {
            oddCharAmount++;
        }
    }
    if (oddCharAmount == 0 || oddCharAmount % 2 == 1) {
        cout << "First" << endl;
    } else {
        cout << "Second" << endl;
    }
}
