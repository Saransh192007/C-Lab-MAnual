/*A student wants to swap the values of two variables for practising 
coding basics.Implement a solution to swap two numbers using different 
techniques.*/
#include <iostream>
using namespace std;

class SwapNumbers {
private:
    int a, b;

public:
    void getData() {
        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;
    }

    void swapWithTemp() {
        int temp = a;
        a = b;
        b = temp;
        cout << "\nAfter swapping using third variable:";
        cout << "\na = " << a << " b = " << b;
    }

    void swapWithoutTemp() {
        a = a + b;
        b = a - b;
        a = a - b;
        cout << "\nAfter swapping without third variable:";
        cout << "\na = " << a << " b = " << b;
    }

    void swapUsingMulDiv() {
        a = a * b;
        b = a / b;
        a = a / b;
        cout << "\nAfter swapping using multiplication & division:";
        cout << "\na = " << a << " b = " << b;
    }
};

int main() {
    SwapNumbers s;
    s.getData();
    s.swapWithTemp();
    s.swapWithoutTemp();
    s.swapUsingMulDiv();
    return 0;
}