#include <iostream>
using namespace std;

int main() {
    string word;

    cout << "Enter a word: ";
    cin >> word;

    if (word == "hello")
        cout << "Hello!";
    else
        cout << "Goodbye!";

    return 0;
}