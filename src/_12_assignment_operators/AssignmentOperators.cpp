#include <iostream>
using namespace std;

int main() {
    int firstNumber = 3;
    const int SECOND_NUMBER = 6;
    firstNumber += SECOND_NUMBER;
    cout << firstNumber;
}