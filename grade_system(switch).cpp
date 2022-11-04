#include <iostream>

using namespace std;

int main() {
    int grade;
    
    cout << "Enter your Grade: ";
    cin >> grade;
    
    switch (grade) {
        case 100: case 99: case 98: case 97: case 96:
            cout << "A+ \n";
            cout << "1.00 \n";
            break;
        case 95: case 94: case 93: case 92: case 91:
            cout << "A \n";
            cout << "1.25 \n";
            break;
        case 90: case 89: case 88: case 87: case 86:
            cout << "A- \n";
            cout << "1.50 \n";
            break;
        case 85: case 84: case 83: case 82: case 81:
            cout << "B+ \n";
            cout << "1.75 \n";
            break;
        case 80: case 79: case 78: case 77: case 76: case 75:
            cout << "B \n";
            cout << "2.00 \n";
            break;
        case 74: case 73: case 72: case 71: case 70: case 69:
            cout << "B- \n";
            cout << "2.25 \n";
            break;
        case 68: case 67: case 66: case 65: case 64: case 63:
            cout << "C+ \n";
            cout << "2.50 \n";
            break;
        case 62: case 61: case 60: case 59: case 58: case 57:
            cout << "C \n";
            cout << "2.75 \n";
            break;
        case 56: case 55: case 54: case 53: case 52: case 51: case 50:
            cout << "C- \n";
            cout << "3.00 \n";
            break;
        default:
            cout << "F \n";
            cout << "5.00 \n";
    }
    
    if (grade >= 96) {
        cout << "Excellent \n";
    } else if (grade >= 86) {
        cout << "Very Good \n";
    } else if (grade >= 69) {
        cout << "Good \n";
    } else if (grade >= 50) {
        cout << "Fair \n";
    } else {
        cout << "Failed \n";
    }
    return 0;
}
