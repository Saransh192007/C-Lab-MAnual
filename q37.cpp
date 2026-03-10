/*Q37. A registration system rejects usernames that contain spaces or special characters. Write a C++
program to validate whether a given string can be accepted as a username.*/
#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string username;
    bool valid = true;

    cout << "Enter username: ";
    cin >> username;

    for(int i = 0; i < username.length(); i++) {
        if(!isalnum(username[i])) {   // checks if not letter or digit
            valid = false;
            break;
        }
    }

    if(valid)
        cout << "Username accepted.";
    else
        cout << "Invalid username.";

    return 0;
}