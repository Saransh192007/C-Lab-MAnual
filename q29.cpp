#include <iostream>
using namespace std;

int main() {

    float temp[30];
    float minTemp;

    cout << "Enter temperatures for 30 days:\n";

    for(int i = 0; i < 30; i++) {
        cin >> temp[i];
    }

    minTemp = temp[0];

    for(int i = 1; i < 30; i++) {
        if(temp[i] < minTemp) {
            minTemp = temp[i];
        }
    }

    cout << "Minimum Temperature of the Month = " << minTemp;

    return 0;
}