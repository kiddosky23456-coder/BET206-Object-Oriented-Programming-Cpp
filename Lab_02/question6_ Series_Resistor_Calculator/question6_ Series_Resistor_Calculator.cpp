#include <iostream>
using namespace std;

int main() {
    double totalResistance = 0.0;
    double resistorValue;
    
    cout << "--- Series Resistor Calculator ---" << endl;
    for (int i = 1; i <= 5; ++i) {
        cout << "Enter value for resistor " << i << " (Ohms): ";
        cin >> resistorValue;
        totalResistance += resistorValue;
    }
    
    cout << "\nTotal Series Resistance = " << totalResistance << " Ohms" << endl;
    
    return 0;
}
