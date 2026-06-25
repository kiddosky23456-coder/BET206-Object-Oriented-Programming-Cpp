#include <iostream>
using namespace std;

int main() {
    double ratedCurrent, measuredCurrent;
    
    cout << "Enter rated current of circuit breaker (A): ";
    cin >> ratedCurrent;
    cout << "Enter measured current in circuit (A): ";
    cin >> measuredCurrent;
    
    if (measuredCurrent > ratedCurrent) {
        cout << "Output: Overload detected. Circuit breaker should trip." << endl;
    } else {
        cout << "Output: Current is within safe limit." << endl;
    }
    
    return 0;
}
