#include <iostream>
using namespace std;

void printSumOf2Numbers(
    const int FIRST_NUMBER,
    const int SECOND_NUMBER
) { cout << FIRST_NUMBER << " + " << SECOND_NUMBER << " = " << FIRST_NUMBER + SECOND_NUMBER; }

int main() {
    cout << "Enter First Number:" << endl;
    int firstNumber;
    cin >> firstNumber;

    cout << "Enter Second Number:" << endl;
    int secondNumber;
    cin >> secondNumber;

    printSumOf2Numbers(firstNumber, secondNumber);
}