#include <iostream>
using namespace std;

int sumOf2Numbers() {
    cout << "Enter First Number:" << endl;
    int firstNumber;
    cin >> firstNumber;

    cout << "Enter Second Number:" << endl;
    int secondNumber;
    cin >> secondNumber;

    return firstNumber + secondNumber;
}

int main() { cout << sumOf2Numbers(); }