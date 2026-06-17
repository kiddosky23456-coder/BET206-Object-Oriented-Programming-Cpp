#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double radius, area;
    double pi = 3.142;

    cout << "Enter radius: ";
    cin >> radius;

    area = pi * pow(radius, 2);

    cout << "Area = " << area << endl;

    return 0;
}