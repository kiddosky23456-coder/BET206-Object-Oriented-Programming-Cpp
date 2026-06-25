#include <iostream>
using namespace std;

int main() {
    double current;
    
    cout << "--- Current Monitoring System ---" << endl;
    cout << "Enter current reading (A): ";
    cin >> current;
    
    while (current <= 10.0) {
        cout << "Status: Safe current level." << endl;
        cout << "Enter next current reading (A): ";
        cin >> current;
    }
    
    cout << "\nOutput: Overcurrent detected. Monitoring stopped." << endl;
    
    return 0;
}
