#include <iostream>
using namespace std;

int main() {
    double totalTemperature = 0.0;
    double temp;
    int validCount = 0;
    
    cout << "--- Temperature Log Analyzer ---" << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << "Enter temperature reading " << i << " (°C): ";
        cin >> temp;
        
        if (temp < 0) {
            cout << "Notice: Invalid reading (< 0°C). Skipped." << endl;
            continue; 
        }
        
        totalTemperature += temp;
        validCount++;
    }
    
    cout << "\n--- Summary Report ---" << endl;
    if (validCount > 0) {
        double average = totalTemperature / validCount;
        cout << "Valid readings accepted: " << validCount << " / 10" << endl;
        cout << "Average of valid temperatures = " << average << " °C" << endl;
    } else {
        cout << "No valid readings were recorded to compute an average." << endl;
    }
    
    return 0;
}
