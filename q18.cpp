/*Q18. A String-matching tool validates if IDs are palindromes. Implement
a solution to check whether a given ID is a palindrome.*/
#include<iostream>
using namespace std;
class palindromes{
    private:
    int n,lastdig,revnum= 0,original;
    public:
    void getdata(){
        cout << "Enter a num ";
        cin >> n;

    }
    void checkdata(){
        original = n;
        while(n!=0){
            lastdig=n%10;
            n = n/10;
            revnum = revnum*10 + lastdig;
        }
        if (original == revnum){
            cout <<"palindrone";

        }
        else{
            cout << "not palindrome";

        }
    }
};
int main(){

palindromes c;
c.getdata();
c.checkdata();
return 0;

}