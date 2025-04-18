#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Enter Full Name: " << endl;
    string fullName;
    getline(
        cin,
        fullName
    );

    cout << "Enter First Number: " << endl;
    string firstNumber;
    cin >> firstNumber;

    cout << "Enter Second Number: " << endl;
    string secondNumber;
    cin >> secondNumber;

    cout << "******************************" << endl;

    cout << "\nThe length of Full Name: " << fullName.length() << endl;

    cout << "Characters at (0, 2, 4, 6) are: " << fullName[0] << " " << fullName[2] << " " << fullName[4] << " " << fullName[6] << endl;

    cout << "Concatenating FirstNumber and SecondNumber = " << firstNumber + secondNumber << endl;

    cout << firstNumber << " * " << secondNumber << " = " << stoi(firstNumber) * stoi(secondNumber);
}