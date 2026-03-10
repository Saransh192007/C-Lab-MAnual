#include<iostream>
using namespace std;
class Prime{
    private:
    int n;
    public:
    void getdata(){
        cout<<"Enter number:";
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