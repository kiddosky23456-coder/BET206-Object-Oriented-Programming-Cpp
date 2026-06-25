#include <iostream>
using namespace std;

int main() {
    double totalLoad = 0.0;
    double appliancePower;
    
    cout << "--- Electrical Load Monitor ---" << endl;
    cout << "System maximum ceiling limit: 3000 W" << endl;
    
    while (totalLoad <= 3000.0) {
        cout << "Current Load: " << totalLoad << " W. Enter next appliance power rating (W): ";
        cin >> appliancePower;
        totalLoad += appliancePower;
    }
    
    cout << "\nWarning: Load limit exceeded. Do not add more appliances!" << endl;
    cout << "Final total load calculation: " << totalLoad << " W" << endl;
    
    return 0;
}
