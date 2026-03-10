/*Q33. A grading system stores marks of multiple students in arrays. Implement a solution to accept
marks in 5 subjects for 3 students, then display:
• marks in 2nd subject of 1st student, and
• marks in 5th subject of 3rd student.*/
#include <iostream>
using namespace std;

int main() {
    int marks[3][5];

    // Input marks
    for(int i = 0; i < 3; i++) {
        cout << "Enter marks for Student " << i+1 << ":\n";
        for(int j = 0; j < 5; j++) {
            cout << "Subject " << j+1 << ": ";
            cin >> marks[i][j];
        }
    }

    // Display required marks
    cout << "\nMarks of 2nd subject of 1st student: " << marks[0][1] << endl;
    cout << "Marks of 5th subject of 3rd student: " << marks[2][4] << endl;

    return 0;
}