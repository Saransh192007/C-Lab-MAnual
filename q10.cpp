/*Q10. A calendar app calculates whether February has 29 days. Implement a solution to check if a year is a
leap year or not.*/
#include<iostream>
using namespace std;
class leapyear{
    private:
    int n;
    public:
    void getdata(){
        cout << "Enter a year :";
cin >> n;

    }
    void checkdata(){
        if(n % 4 == 0){
            cout << "feburary has 29 days and the year is leap year ";

        }
        else{
            cout << "feburary has 28 days and the year is not leap year ";

        }
    }
};
int main(){
    leapyear c ;
    c.getdata();
    c.checkdata();
    return 0;

}