#include <iostream>
using namespace std;

int main() {
    double gpa;
    
    cout << "Enter student GPA: ";
    cin >> gpa;
    
    if (gpa >= 3.5) {
        cout << "Output: Eligible for engineering scholarship." << endl;
    } else {
        cout << "Output: Not eligible for engineering scholarship." << endl;
    }
    
    return 0;
}
