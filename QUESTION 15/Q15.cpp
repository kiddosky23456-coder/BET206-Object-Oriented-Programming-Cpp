#include <iostream>
using namespace std;

int main() {
    float a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << ((a > b) ? a : b);

    return 0;
}