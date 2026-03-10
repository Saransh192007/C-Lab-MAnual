/*Q13. A mathematics tool computes the exact roots of a quadratic equation for teaching purposes. Implement a
solution to calculate the roots of a quadratic equation.*/
#include<iostream>
#include<cmath>
using namespace std; 
class roots{
    private:
     float a,b,c ;
     float D, r1,r2;

    public:
void getdata(){
    cout << "Enter a quadratic equation :"<< "\n";
    cin >> a,b,c;
}    
void checkdata(){
    if(a==0){
        cout << "not a quadratic equation " << "\n";

    }
    D = (b*b) - (4*a*c);
    if (D > 0){
        r1 = (-b + sqrt(D))/(2*a);
        r2 = (-b - sqrt(D))/(2*a);
        cout << "The roots are real and distinks "<< "\n";
        cout<< "roots are "<< r1 << "\n";
        cout << r2 << "\n";

    }
    else if(D == 0){
r1 = -b/(2*a);
cout << "The roots are equal \n";
cout << " Roots are \n"<< r1;

    }
    else {
        float real = -b/(2*a);
        float imag = sqrt(-D)/(2*a);
        cout << "Roots are imaginary \n";
        cout << "Root 1 "<< real << "i\n";
        cout << "root 2 "<< imag << "\n";

    }

}


};
int main (){
    roots c;
    c.getdata();
    c.checkdata();
    return 0;

}

