using namespace std;
#include <iostream>

int main() {
    cout << "Enter First Number:" << endl;
    int firstNumber;
    cin >> firstNumber;
    cout << "Enter Third Number:" << endl;
    int secondNumber;
    cin >> secondNumber;
    cout << "Enter Second Number:" << endl;
    int thirdNumber;
    cin >> thirdNumber;
    const int TOTAL_NUMBERS = firstNumber + secondNumber + thirdNumber;
    cout << firstNumber << " +" << endl;
    cout << secondNumber << " +" << endl;
    cout << thirdNumber << " +" << endl;
    cout << "----------" << endl;
    cout << "Total: " << TOTAL_NUMBERS;
}