/*Q31. A manufacturing QC system checks defect codes divisible by both 3 and 5.
Implement a solution to store 5 elements in an array and count how many numbers are divisible by 3 and 5*/
#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int count = 0;

    // Input 5 elements
    for(int i = 0; i < 5; i++) {
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
    }

    // Check divisibility by 3 and 5
    for(int i = 0; i < 5; i++) {
        if(arr[i] % 3 == 0 && arr[i] % 5 == 0) {
            count++;
        }
    }

    // Display result
    cout << "Numbers divisible by both 3 and 5 = " << count << endl;

    return 0;
}