/*. A weather app developer needs to provide both Celsius and Fahrenheit readings. Implement a
solution toconvert Fahrenheit temperature into Centigrade or vice versa.*/
#include <iostream>
using namespace std;
class Temp
{
    int celcius;
    float convert;

public:
    void getdata();
    void display();
};
void Temp::getdata()
{
    cout << "Enter temp";
    cin >> celcius;
};
void Temp::display()
{
    convert = (celcius - 32) / 1.8;
    cout << "avg is" << celcius;
};
int main()
{
    Temp d;
    d.getdata();
    d.display();
    return 0;
}