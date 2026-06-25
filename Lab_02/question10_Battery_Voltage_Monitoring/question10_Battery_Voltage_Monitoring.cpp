#include <iostream>
using namespace std;

int main() {
    double voltage;
    
    cout << "--- Battery Voltage Monitor ---" << endl;
    cout << "Enter initial battery voltage (V): ";
    cin >> voltage;
    
    while (voltage >= 12.0) {
        cout << "Status: Normal." << endl;
        cout << "Enter next battery voltage reading (V): ";
        cin >> voltage;
    }
    
    cout << "\nOutput: Battery voltage low. Recharge required." << endl;
    
    return 0;
}
