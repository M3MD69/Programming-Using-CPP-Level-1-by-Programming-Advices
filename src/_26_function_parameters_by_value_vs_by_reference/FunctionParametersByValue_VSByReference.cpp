#include <iostream>
using namespace std;

void swapTwoNumbers(
    int& firstNumber,
    int& secondNumber
) {
    firstNumber += secondNumber;
    secondNumber = firstNumber - secondNumber;
    firstNumber -= secondNumber;
}

void printNumbers(
    const int FIRST_NUMBER,
    const int SECOND_NUMBER
) {
    cout << "First Number: " << FIRST_NUMBER << endl;
    cout << "Second Number: " << SECOND_NUMBER << endl;
}

int main() {
    cout << "Enter First Number:" << endl;
    int firstNumber;
    cin >> firstNumber;

    cout << "Enter Second Number:" << endl;
    int secondNumber;
    cin >> secondNumber;

    cout << "Before Swap" << endl;
    printNumbers(firstNumber, secondNumber);

    cout << "********************" << endl;

    cout << "After Swap" << endl;
    swap(
        firstNumber,
        secondNumber
    );
    printNumbers(firstNumber, secondNumber);
}