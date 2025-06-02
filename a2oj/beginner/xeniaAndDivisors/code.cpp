#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, one_count = 0, two_count = 0, three_count = 0, four_count = 0, six_count = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] == 5 || arr[i] == 7) {
            cout << -1 << endl;
            return 0;
        } else if (arr[i] == 1) {
            one_count++;
        } else if (arr[i] == 2) {
            two_count++;
        } else if (arr[i] == 3) {
            three_count++;
        } else if (arr[i] == 4) {
            four_count++;
        } else { //if (arr[i] == 6) {
            six_count++;
        }
    }
    if (one_count != n / 3)  {
        cout << -1 << endl;
        return 0;
    }
    if (six_count < three_count
    || two_count < four_count 
    || six_count - three_count != two_count - four_count
    ) {
        cout << -1 << endl;
        return 0;
    }
    for (int i = 0; i < three_count; i++) {
        cout << "1 3 6" << endl;
    }
    for (int i = 0; i < four_count; i++) {
        cout << "1 2 4" << endl;
    }
    for (int i = 0; i < six_count - three_count; i++) {
        cout << "1 2 6" << endl;
    }
}    
