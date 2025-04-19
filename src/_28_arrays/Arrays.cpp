#include <iostream>
using namespace std;

void readNumbers(float numbers[]) {
    cout << "Enter First Number:" << endl;
    cin >> numbers[0];

    cout << "Enter Second Number:" << endl;
    cin >> numbers[1];

    cout << "Enter Third Number:" << endl;
    cin >> numbers[2];
}

int main() {
    float numbers[3];
    readNumbers(numbers);
    const float AVERAGE = (numbers[0] + numbers[1] + numbers[2]) / 3.0;
    cout << "Average = " << AVERAGE;
}