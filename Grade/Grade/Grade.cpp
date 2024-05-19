#include <iostream>
using namespace std;

char assignGrade(float score) {
    char grade;
    switch (static_cast<int>(score) / 10) {
        case 10:
        case 9:
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;
        case 7:
            grade = 'C';
            break;
        case 6:
            grade = 'D';
            break;
        default:
            grade = 'F';
            break;
    }
    return grade;
}

int main() {
    float studentScore;
    cout << "Enter the student's score: ";
    cin >> studentScore;

    char grade = assignGrade(studentScore);
    cout << "Grade: " << grade << endl;

    return 0;
}
