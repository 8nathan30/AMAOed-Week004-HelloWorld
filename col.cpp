#include <iostream>

using namespace std;

int main() {
    int grade;
    
    cout << "Enter your Grade: ";
    cin >> grade;
    
    switch (grade) {
        case 100: case 99: case 98: case 97: case 96:
            cout << "A+ \n";
            break;
        case 95: case 94: case 93: case 92: case 91:
            cout << "A \n";
            break;
        case 90: case 89: case 88: case 87: case 86:
            cout << "A- \n";
            break;
        case 85: case 84: case 83: case 82: case 81:
            cout << "B+ \n";
            break;
        case 80:
            cout << "B \n";
            break;
        case 68:
            cout << "B- \n";
        case 63:
    }

    return 0;
}