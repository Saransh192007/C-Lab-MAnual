/*A teacher wants to calculate the average marks of three
students to determine the class performance.Implement a solution
to accept three numbers and compute their average.*/
#include<iostream>
using namespace std;
class Avg
{
private:
int a,b,c;
float sum;
public:
void getData();
void Display();
};
void Avg::getData(){
        cout<<"Enter first number";
        cin>>a;
        cout<<"Enter second number";
        cin>>b;
        cout<<"Enter third number";
        cin>>c;
};
void Avg::Display(){
    sum=(a+b+c)/3;
    cout << "avg is"<<sum;
};
int main (){
    Avg d;
    d.getData();
    d.Display();
    return 0;
}
