#include <iostream>
using namespace std;

int main() {
    int choice;
    double voltage, current, power, time, result;
    
    cout << "--- Power Rating Menu ---" << endl;
    cout << "1. Calculate DC Power" << endl;
    cout << "2. Calculate Resistance using Ohm's Law" << endl;
    cout << "3. Calculate Energy Consumption" << endl;
    cout << "Enter option (1-3): ";
    cin >> choice;
    
    switch(choice) {
        case 1:
            cout << "Enter Voltage (V): ";
            cin >> voltage;
            cout << "Enter Current (A): ";
            cin >> current;
            result = voltage * current;
            cout << "Calculated DC Power = " << result << " W" << endl;
            break;
        case 2:
            cout << "Enter Voltage (V): ";
            cin >> voltage;
            cout << "Enter Current (A): ";
            cin >> current;
            if (current != 0) {
                result = voltage / current;
                cout << "Calculated Resistance = " << result << " Ohms" << endl;
            } else {
                cout << "Error: Current cannot be zero." << endl;
            }
            break;
        case 3:
            cout << "Enter Power (W): ";
            cin >> power;
            cout << "Enter Time (s): ";
            cin >> time;
            result = power * time;
            cout << "Calculated Energy Consumption = " << result << " J" << endl;
            break;
        default:
            cout << "Invalid selection" << endl;
    }
    
    return 0;
}
