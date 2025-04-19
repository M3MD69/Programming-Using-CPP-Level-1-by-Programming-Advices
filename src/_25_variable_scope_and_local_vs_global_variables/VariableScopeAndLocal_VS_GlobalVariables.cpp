#include <iostream>
using namespace std;

int firstNumber = 12, secondNumber = 32;

void increaseNumbers() { firstNumber++, secondNumber++; }

int main() {
    int firstNumber = 4;
    ::firstNumber++;
    cout << ::firstNumber++ << endl;
    cout << ++firstNumber << endl;
    cout << ::secondNumber << endl;
    cout << ::firstNumber << endl;
}