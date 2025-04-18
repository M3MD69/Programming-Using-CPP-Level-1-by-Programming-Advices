#include <iostream>
using namespace std;

int main() {
    cout << "Enter First Number: " << endl;
    int firstNumber;
    cin >> firstNumber;
    cout << "Enter Second Number: " << endl;
    int secondNumber;
    cin >> secondNumber;

    cout << firstNumber << " + " << secondNumber << " = " << firstNumber + secondNumber << endl;
    cout << firstNumber << " - " << secondNumber << " = " << firstNumber - secondNumber << endl;
    cout << firstNumber << " * " << secondNumber << " = " << firstNumber * secondNumber << endl;
    cout << firstNumber << " / " << secondNumber << " = " << firstNumber / secondNumber << endl;
    cout << firstNumber << " % " << secondNumber << " = " << firstNumber % secondNumber;
}