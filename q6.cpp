/*Q6. An HR system needs to calculate employees’ net salaries, including a fixed 12% bonus for each worker.
Implement a solution to accept the number of employees and their basic salary. Compute bonus, net salary, and
display results*/
#include <iostream>
using namespace std;

class Employee {
private:
    float basicSalary, bonus, netSalary;

public:
    void getSalary() {
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }

    void calculateSalary() {
        bonus = 0.12 * basicSalary;
        netSalary = basicSalary + bonus;
    }

    void display() {
        cout << "Bonus (12%): " << bonus << endl;
        cout << "Net Salary: " << netSalary << endl;
        cout << "------------------------\n";
    }
};

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    Employee e;
    for (int i = 1; i <= n; i++) {
        cout << "\nEmployee " << i << endl;
        e.getSalary();
        e.calculateSalary();
        e.display();
    }

    return 0;
}
