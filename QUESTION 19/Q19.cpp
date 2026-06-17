#include <iostream>
using namespace std;

int main() {
    int binary;

    cout << "Enter binary number: ";
    cin >> binary;

    int decimal = 0, base = 1, rem, temp = binary;

    while (temp > 0) {
        rem = temp % 10;
        decimal += rem * base;
        base *= 2;
        temp /= 10;
    }

    cout << "Decimal = " << decimal << endl;
    cout << "Hexadecimal = " << hex << decimal << endl;
    cout << "Octal = " << oct << decimal << endl;

    return 0;
}