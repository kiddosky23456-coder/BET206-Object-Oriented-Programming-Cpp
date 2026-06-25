#include <iostream>
using namespace std;

int main() {
    int choice;
    double voltage, current, power, time, result;
    
    do {
        cout << "\n--- Menu-Driven Electrical Calculator ---" << endl;
        cout << "1. Calculate Power" << endl;
        cout << "2. Calculate Resistance" << endl;
        cout << "3. Calculate Energy" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                cout << "Enter Voltage (V): ";
                cin >> voltage;
                cout << "Enter Current (A): ";
                cin >> current;
                result = voltage * current;
                cout << "Calculated Power = " << result << " W" << endl;
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
                    cout << "Error: Division by zero (Current cannot be 0)." << endl;
                }
                break;
            case 3:
                cout << "Enter Power (W): ";
                cin >> power;
                cout << "Enter Time (s): ";
                cin >> time;
                result = power * time;
                cout << "Calculated Energy = " << result << " J" << endl;
                break;
            case 4:
                cout << "Exiting the programme. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice! Please select a valid option from the menu." << endl;
        }
    } while (choice != 4);
    
    return 0;
}
