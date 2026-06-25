#include <iostream>
using namespace std;

int main() {
    int choice;
    
    cout << "--- Electrical Component Menu ---" << endl;
    cout << "1. Resistor" << endl;
    cout << "2. Capacitor" << endl;
    cout << "3. Diode" << endl;
    cout << "4. Transistor" << endl;
    cout << "5. LED" << endl;
    cout << "Enter your choice (1-5): ";
    cin >> choice;
    
    switch(choice) {
        case 1:
            cout << "Description: Resistor: Used to limit current in a circuit." << endl;
            break;
        case 2:
            cout << "Description: Capacitor: Used to store electrical energy in an electric field." << endl;
            break;
        case 3:
            cout << "Description: Diode: Allows current to flow in one direction only." << endl;
            break;
        case 4:
            cout << "Description: Transistor: Used to amplify or switch electrical signals." << endl;
            break;
        case 5:
            cout << "Description: LED: Emits light when an electric current flows through it." << endl;
            break;
        default:
            cout << "Invalid selection" << endl;
    }
    
    return 0;
}
