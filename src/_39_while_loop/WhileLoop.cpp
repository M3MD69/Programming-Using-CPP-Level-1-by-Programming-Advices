#include <iostream>
using namespace std;

int main() {
    cout << "Enter Positive Number: " << endl;
    int positiveNumber;
    cin >> positiveNumber;
    while (positiveNumber < 1) {
        cout << "Enter Positive Number: " << endl;
        cin >> positiveNumber;
    }
    cout << "Your Positive Number = " << positiveNumber;
}