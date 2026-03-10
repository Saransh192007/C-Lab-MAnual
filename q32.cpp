/*Q32. A stock market app tracks first and second highest stock values. Implement a solution to find the largest
and second largest number in an array of size 5.*/
#include <iostream>
using namespace std;

int main() {
    int arr[5];
    
    // Input elements
    for(int i = 0; i < 5; i++) {
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
    }

    int largest = arr[0];
    int secondLargest = arr[0];

    // Find largest and second largest
    for(int i = 1; i < 5; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    cout << "Largest number = " << largest << endl;
    cout << "Second largest number = " << secondLargest << endl;

    return 0;
}