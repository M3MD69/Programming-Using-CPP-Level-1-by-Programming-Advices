#include <iostream>
using namespace std;

void sumOf2Numbers() {
    cout << "Enter First Number:" << endl;
    int firstNumber;
    cin >> firstNumber;

    cout << "Enter Second Number:" << endl;
    int secondNumber;
    cin >> secondNumber;

    cout << firstNumber + secondNumber;
}

int main() { sumOf2Numbers(); }