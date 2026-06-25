#include <iostream>
using namespace std;

int main() {
    double voltage;
    
    cout << "Enter voltage reading (V): ";
    cin >> voltage;
    
    if (voltage < 0) {
        cout << "Output: Invalid voltage reading" << endl;
    } else if (voltage <= 50) {
        cout << "Output: Low voltage" << endl;
    } else if (voltage <= 240) {
        cout << "Output: Normal voltage" << endl;
    } else if (voltage <= 415) {
        cout << "Output: High voltage" << endl;
    } else {
        cout << "Output: Dangerous voltage" << endl;
    }
    
    return 0;
}
