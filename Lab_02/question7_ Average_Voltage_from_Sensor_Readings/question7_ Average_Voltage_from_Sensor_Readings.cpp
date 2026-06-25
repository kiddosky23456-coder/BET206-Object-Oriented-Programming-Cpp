#include <iostream>
using namespace std;

int main() {
    double totalVoltage = 0.0;
    double voltageReading;
    double averageVoltage;
    
    cout << "--- Average Voltage Calculator ---" << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << "Enter voltage reading " << i << " (V): ";
        cin >> voltageReading;
        totalVoltage += voltageReading;
    }
    
    averageVoltage = totalVoltage / 10.0;
    cout << "\nAverage Voltage = " << averageVoltage << " V" << endl;
    
    return 0;
}
