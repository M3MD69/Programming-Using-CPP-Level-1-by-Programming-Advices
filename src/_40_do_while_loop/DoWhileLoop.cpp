#include <iostream>
using namespace std;

int main() {
    int positiveNumber;
    do {
        cout << "Enter Positive Number: " << endl;
        cin >> positiveNumber;
    } while (positiveNumber < 1);
    cout << "Your Positive Number = " << positiveNumber;
}