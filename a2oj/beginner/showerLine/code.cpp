#include <bits/stdc++.h>
using namespace std;

int main()
{
    int happiness_matrix[5][5], maximum_happiness = -1, current_permutation_happiness;
    string students = "12345";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> happiness_matrix[i][j];
        }
    }
    do {
        current_permutation_happiness = 0;
        current_permutation_happiness += happiness_matrix[students[0]-'1'][students[1]-'1'];
        current_permutation_happiness += happiness_matrix[students[1]-'1'][students[0]-'1'];
        current_permutation_happiness += happiness_matrix[students[2]-'1'][students[1]-'1'];
        current_permutation_happiness += happiness_matrix[students[1]-'1'][students[2]-'1'];
        current_permutation_happiness += 2*happiness_matrix[students[2]-'1'][students[3]-'1'];
        current_permutation_happiness += 2*happiness_matrix[students[3]-'1'][students[2]-'1'];
        current_permutation_happiness += 2*happiness_matrix[students[4]-'1'][students[3]-'1'];
        current_permutation_happiness += 2*happiness_matrix[students[3]-'1'][students[4]-'1'];
        maximum_happiness = max(current_permutation_happiness, maximum_happiness);
    } while (next_permutation(students.begin(), students.end()));
    cout << maximum_happiness << endl;
}
