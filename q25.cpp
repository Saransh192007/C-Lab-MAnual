#include <iostream>
using namespace std;

int main() {
    int start, end, i, j, flag;

    cout << "Enter starting limit: ";
    cin >> start;

    cout << "Enter ending limit: ";
    cin >> end;

    for(i = start; i <= end; i++) {
        if(i <= 1)
            continue;

        flag = 1;

        for(j = 2; j <= i/2; j++) {
            if(i % j == 0) {
                flag = 0;
                break;
            }
        }

        if(flag == 1)
            cout << i << " ";
    }

    return 0;
}