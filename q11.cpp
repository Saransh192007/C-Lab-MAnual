/*Q11. A wholesale supplier applies 10% discount if the order > 1000 items. Implement a solution to compute total
expenses and apply a discount accordingly.*/
#include<iostream>
using namespace std;
class discount{
    private:
    int amount;
    public:
    void getdata(){
        cout << "Enter a total amount of in rupppes :" << "\n";
cin >> amount;

    }
    void checkdata(){
        if (amount >= 1000){
            int n = amount - amount/10;
            cout <<"sir the total bill is :"<< n << "\n";


        }
        else if( amount < 1000) {
            cout << " The total bill is "<<amount;

        }
    }
};
int main(){
    discount c;
    c.getdata();
    c.checkdata();
    return 0 ;

}