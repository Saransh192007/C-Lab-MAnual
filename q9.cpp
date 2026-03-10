/*Q9. A text editor auto-detects whether an input letter is a vowel, a consonant or a number. Implement a
solution to classify the symbol*/
#include<iostream>
using namespace std;
class Alphabet{
    private:
    char alphabet;
    public:
    void getdata(){
        cout << "Enter a alphabet in small letter:";
        cin >> alphabet;

    }
    void checkdata(){
        if(alphabet == 'a'|| alphabet =='e'|| alphabet =='i'|| alphabet == 'o'||alphabet == 'u'
         ||alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || alphabet == 'O' || alphabet == 'U'){
            cout<<"The alphabet  is vowel";
        }
        else{
        cout<<"The alphabet is consonent";

        }

    }

};
int main (){
Alphabet c;
c.getdata();
c.checkdata();
return 0;

}