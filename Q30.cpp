/*Q30. A payroll system maintains employee salary records. Implement a solution to accept salary of
10 employees in an array, compute total salary and average salary, then display the result.*/
#include <iostream>
using namespace std;

int main() {
    double salary[10];
    double total = 0, average;

    // Input salaries
    for(int i = 0; i < 10; i++) {
        cout << "Enter salary of employee " << i+1 << ": ";
        cin >> salary[i];
        total += salary[i];
    }

    // Calculate average
    average = total / 10;

    // Display results
    cout << "\nTotal Salary = " << total << endl;
    cout << "Average Salary = " << average << endl;

    return 0;
}