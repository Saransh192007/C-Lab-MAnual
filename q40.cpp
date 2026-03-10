#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {

    string input, cleaned = "";
    int digits = 0, special = 0, words = 0;

    cout << "Enter a string: ";
    getline(cin, input);

    // Remove extra spaces
    bool space = false;
    for(int i = 0; i < input.length(); i++) {

        if(input[i] != ' ') {
            cleaned += input[i];
            space = false;
        }
        else if(!space && cleaned.length() != 0) {
            cleaned += ' ';
            space = true;
        }
    }

    // Convert to sentence case
    for(int i = 0; i < cleaned.length(); i++) {
        if(i == 0)
            cleaned[i] = toupper(cleaned[i]);
        else
            cleaned[i] = tolower(cleaned[i]);
    }

    // Count digits, special characters and words
    for(int i = 0; i < cleaned.length(); i++) {

        if(isdigit(cleaned[i]))
            digits++;

        else if(!isalnum(cleaned[i]) && cleaned[i] != ' ')
            special++;

        if(cleaned[i] == ' ')
            words++;
    }

    if(cleaned.length() > 0)
        words++;

    // Validation
    bool valid = true;
    for(int i = 0; i < cleaned.length(); i++) {
        if(!isalnum(cleaned[i]) && cleaned[i] != ' ') {
            valid = false;
            break;
        }
    }

    cout << "\nNormalized String: " << cleaned << endl;
    cout << "Total Words: " << words << endl;
    cout << "Total Digits: " << digits << endl;
    cout << "Total Special Characters: " << special << endl;

    if(valid)
        cout << "String is VALID (contains only alphabets, digits, and spaces)." << endl;
    else
        cout << "String is INVALID (contains other characters)." << endl;

    return 0;
}