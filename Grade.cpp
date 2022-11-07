#include <iostream>
#include <string>

using namespace std;

int main() {
    int grade;
    string point = "1235";
    string input = "ABCF";
    string gp = "Grade Point: ";
    string gi = "Grade Input: ";
    string r = "Remarks: ";

    cout << "Enter your Grade: ";
    cin >> grade;
    
    switch (grade) {
    case 100: case 99: case 98: case 97: case 96:
        cout << gp << point[0] << ".00 \n";
        cout << gi << input[0] << "+ \n";
        break;
    case 95: case 94: case 93: case 92: case 91:
        cout << gp << point[0] << ".25 \n";
        cout << gi << input[0] << endl;
        break;
    case 90: case 89: case 88: case 87: case 86:
        cout << gp << point[0] << ".50 \n";
        cout << gi << input[0] << "- \n";
        break;
    case 85: case 84: case 83: case 82: case 81:
        cout << gp << point[0] << ".75 \n";
        cout << gi << input[1] << "+ \n";
        break;
    case 80: case 79: case 78: case 77: case 76: case 75:
        cout << gp << point[1] << ".00 \n";
        cout << gi << input[1] << endl;
        break;
    case 74: case 73: case 72: case 71: case 70: case 69:
        cout << gp << point[1] << ".25 \n";
        cout << gi << input[1] << "- \n";
        break;
    case 68: case 67: case 66: case 65: case 64: case 63:
        cout << gp << point[1] << ".50 \n";
        cout << gi << input[2] << "+ \n";
        break;
    case 62: case 61: case 60: case 59: case 58: case 57:
        cout << gp << point[1] << ".75 \n";
        cout << gi << input[2] << endl;
        break;
    case 56: case 55: case 54: case 53: case 52: case 51: case 50:
        cout << gp << point[2] << ".00 \n";
        cout << gi << input[2] << "- \n";
        break;
    default:
        cout << gp << point[3] << ".00 \n";
        cout << gi << input[3] << endl;
    }

    if (grade >= 96) {
        cout << r << "Excellent \n";
    }
    else if (grade >= 86) {
        cout << r << "Very Good \n";
    }
    else if (grade >= 69) {
        cout << r << "Good \n";
    }
    else if (grade >= 50) {
        cout << r << "Fair \n";
    }
    else {
        cout << r << "Failed \n";
    }
    system("PAUSE");

    return 0;
}
