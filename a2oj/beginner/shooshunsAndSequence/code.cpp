#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, repeatedValue , amountToDiscard;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    repeatedValue = arr[k - 1];
    for (int i = k; i < n; i++) {
        if (repeatedValue != arr[i]) {
            cout << -1 << endl;
            return 0;
        }
    }
    amountToDiscard = k - 1;
    for (int i = k - 2; i >= 0; i--) {
        if (repeatedValue != arr[i]) {
            break;
        }
        amountToDiscard--;
    }
    cout << amountToDiscard << endl;
}
