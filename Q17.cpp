#include <iostream>
#include <cmath>
using namespace std;

class NumberAnalyzer {
private:
    int num;

public:
    // Constructor
    NumberAnalyzer(int n) {
        num = n;
    }

    // Function to check Perfect Number
    void checkPerfect() {
        int sum = 0;

        for (int i = 1; i <= num / 2; i++) {
            if (num % i == 0)
                sum += i;
        }

        if (sum == num)
            cout << num << " is a Perfect Number" << endl;
        else
            cout << num << " is NOT a Perfect Number" << endl;
    }

    // Function to check Armstrong Number
    void checkArmstrong() {
        int temp = num, digits = 0;
        double sum = 0;

        // Count digits
        while (temp != 0) {
            digits++;
            temp /= 10;
        }

        temp = num;

        // Armstrong calculation
        while (temp != 0) {
            int digit = temp % 10;
            sum += pow(digit, digits);
            temp /= 10;
        }

        if (sum == num)
            cout << num << " is an Armstrong Number" << endl;
        else
            cout << num << " is NOT an Armstrong Number" << endl;
    }
};

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    NumberAnalyzer obj(n);
    obj.checkPerfect();
    obj.checkArmstrong();

    return 0;
}
