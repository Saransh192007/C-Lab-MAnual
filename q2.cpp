/*Q2. An architect wants to calculate the space covered by a circular fountain. Implement a solution to compute
the area of a circle.*/
#include <iostream>
using namespace std;

class Circle {
private:
    float radius, area;

public:
    void getRadius() {
        cout << "Enter radius of the circle: ";
        cin >> radius;
    }

    void calculateArea() {
        area = 3.14 * radius * radius;
    }

    void display() {
        cout << "Area of the circle: " << area;
    }
};

int main() {
    Circle c;
    c.getRadius();
    c.calculateArea();
    c.display();
    return 0;
}
