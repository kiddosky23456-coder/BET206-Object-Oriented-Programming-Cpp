#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if ((num & (num - 1)) == 0)
        cout << "Power of 2";
    else
        cout << "Not a power of 2";

    return 0;
}