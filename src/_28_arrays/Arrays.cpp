#include <iostream>
using namespace std;

void readNumbers(int numbers[]) {
    cout << "Enter First Number:" << endl;
    cin >> numbers[0];

    cout << "Enter Second Number:" << endl;
    cin >> numbers[1];

    cout << "Enter Third Number:" << endl;
    cin >> numbers[2];
}

int main() {
    int numbers[3];
    readNumbers(numbers);
    const int AVERAGE = (numbers[0] + numbers[1] + numbers[2]) / 3;
    cout << "Average = " << AVERAGE;
}