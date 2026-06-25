#include <iostream>
using namespace std;

int main() {
    int safeCount = 0;
    int unsafeCount = 0;
    double currentReading;
    
    cout << "--- Current Safety Counter ---" << endl;
    for (int i = 1; i <= 8; ++i) {
        cout << "Enter current reading " << i << " (A): ";
        cin >> currentReading;
        
        if (currentReading <= 10.0) {
            safeCount++;
        } else {
            unsafeCount++;
        }
    }
    
    cout << "\nSummary Results:" << endl;
    cout << "Safe readings (<= 10 A): " << safeCount << endl;
    cout << "Unsafe readings (> 10 A): " << unsafeCount << endl;
    
    return 0;
}
