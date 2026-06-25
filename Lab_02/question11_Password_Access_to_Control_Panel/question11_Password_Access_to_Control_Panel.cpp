#include <iostream>
using namespace std;

int main() {
    int password;
    
    cout << "--- Control Panel Security ---" << endl;
    cout << "Enter control panel password: ";
    cin >> password;
    
    while (password != 2080) {
        cout << "Access Denied. Incorrect Password. Please try again: ";
        cin >> password;
    }
    
    cout << "\nOutput: Access granted to control panel." << endl;
    
    return 0;
}
