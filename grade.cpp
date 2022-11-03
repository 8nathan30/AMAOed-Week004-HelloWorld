#include <iostream>

using namespace std;

int main() {
    
    double m, p, f, pp, cp1, average;
    
    cout << "\n Enter your GRADES";
    
    cout << "\n MATH: ";
    cin >> m;
    
    cout << "\n PHYSICS: ";
    cin >> p;
    
    cout << "\n FILIPINO: ";
    cin >> f;
    
    cout << "\n PURPOSIVE COMMUNICATION: ";
    cin >> pp;
    
    cout << "\n COMPUTER PROGRAMMING 1: ";
    cin >> cp1;
    
    average = (m + p + f + pp + cp1) / 5;
    
    cout << "Your Average is: " << average << endl;
    cout << "Remarks: ";
    
    if (average >= 97) {
        cout << "You Passed with Highest Honor";
    } else if (average >= 93) {
        cout << "You Passed with High Honor";
    } else if (average >= 90) {
	cout << "You Passed with Honor";
    } else if (average >= 75) {
	cout << "You Passed";
    } else {
	cout << "You Failed";
    }
    
    return 0;
}