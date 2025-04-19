#include <iostream>
using namespace std;

void readNumbers(float numbers[3]) {
    cout << "Enter First Number:" << endl;
    cin >> numbers[0];

    cout << "Enter Second Number:" << endl;
    cin >> numbers[1];

    cout << "Enter Third Number:" << endl;
    cin >> numbers[2];
}

float calculateAverageNumbers(float numbers[3]) { return (numbers[0] + numbers[1] + numbers[2]) / 3; }

int main() {
    float numbers[3];
    readNumbers(numbers);
    cout << "Average = " << calculateAverageNumbers(numbers);
}