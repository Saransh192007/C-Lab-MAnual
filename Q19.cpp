/*Q19. A network security system generates prime numbers in a range for encryption key pools. Implement a
solution to find all prime numbers within a given range.*/
#include<iostream>
using namespace std;
class Prime{
    private:
    int n;
    public:
    void getdata(){
        cout<<"Enter number a num between 1- 500:";
        cin>>n;
    }
    void checkdata(){
        for(int i=2;i<n;i++){
            if(n%i==0){
                cout<<"number is composite";
                break;
            }
        
            else{
                 cout<<"number is prime";
                 break;
        }
    }
}
};
int main(){
    Prime c;
    c.getdata();
    c.checkdata();
    return 0;
}