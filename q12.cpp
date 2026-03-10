/*Q12. A civil engineer classifies a triangle design as equilateral, isosceles, or scalene. Implement a solution to
check the triangle type based on its sides*/
#include<iostream>
using namespace  std;
class triangle{
    private :
    int a,b,c;
    public:
    void getdata(){
        cout <<"Enter the three side of a triangle:";
        cin >> a >> b >> c;
    }
      void checkdata(){
        if( a == b && b == c){
            cout << "The triangle is Equilateral";

        }
        else if( a == b || b == c || c == a ){
            cout << " The triangle is isosales ";
        }
        else {
            cout << "The triangle is scalen ";

        }
      }
};
int main (){
    triangle c;
    c.getdata();
    c.checkdata();
    return 0;
}