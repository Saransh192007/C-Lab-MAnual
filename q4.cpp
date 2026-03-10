/*A shopkeeper wants to calculate the total bill amount after applying a 20% discount on the 
purchase.Implement a solution to accept item no., quantity, and unit price. Compute the amount and 
apply 20% discount*/
#include <iostream>
using namespace std;

class Shop {
private:
    int itemNo, quantity;
    float unitPrice, total, discount, finalAmount;

public:
    void getData() {
        cout << "Enter Item Number: ";
        cin >> itemNo;
        cout << "Enter Quantity: ";
        cin >> quantity;
        cout << "Enter Unit Price: ";
        cin >> unitPrice;
    }

    void calculateBill() {
        total = quantity * unitPrice;
        discount = 0.20 * total;
        finalAmount = total - discount;
    }

    void display() {
        cout << "\nTotal Amount: " << total;
        cout << "\nDiscount (20%): " << discount;
        cout << "\nFinal Bill Amount: " << finalAmount;
    }
};

int main() {
    Shop s;
    s.getData();
    s.calculateBill();
    s.display();
    return 0;
}