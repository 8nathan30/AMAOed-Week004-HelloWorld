#include <iostream>

using namespace std;

int main() {
    
    int grade;
    
    cout << "Enter your Grade: ";
    cin >> grade;
    
    cout << "Your Grade is ";
    
    if (grade >= 96) {
        cout << "A+ \n";
    } else if (grade >= 91) {
        cout << "A \n";
    } else if (grade >= 86) {
        cout << "A- \n";
    } else if (grade >= 81) {
        cout << "B+ \n";
    } else if (grade >= 75) {
        cout << "B \n";
    } else if (grade >= 69) {
        cout << "B- \n";
    } else if (grade >= 63) {
        cout << "C+ \n";
    } else if (grade >= 57) {
        cout << "C \n";
    } else if (grade >= 50) {
        cout << "C- \n";
    } else {
        cout << "F \n";
    }

    return 0;
}