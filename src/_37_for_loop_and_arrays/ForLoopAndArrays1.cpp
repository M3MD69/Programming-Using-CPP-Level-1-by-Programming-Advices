#include <iostream>
using namespace std;

int calculateSumOfNumbers(
    const int NUMBERS[],
    const int LENGTH
) {
    int sum = 0;
    for (int index = 0; index < LENGTH; ++index)
        sum += NUMBERS[index];
    return sum;
}

void printNumbers(
    const int NUMBERS[],
    const int LENGTH
) {
    for (int index = 0; index < LENGTH; ++index) {
        cout << NUMBERS[index];
        if (index < LENGTH - 1)
            cout << ", ";
    }
}

void readNumbers(
    int numbers[],
    const int LENGTH
) {
    for (int index = 0; index < LENGTH; ++index) {
        cout << "Enter number of index (" << index << ")" << endl;
        cin >> numbers[index];
    }
}

int getLength() {
    int length;
    cout << "Enter count of numbers:" << endl;
    cin >> length;
    return length;
}

int main() {
    const int LENGTH = getLength();

    int numbers[LENGTH];

    readNumbers(numbers, LENGTH);

    cout << "Numbers: ";
    printNumbers(numbers, LENGTH);

    const int SUM_OF_NUMBERS = calculateSumOfNumbers(numbers, LENGTH);

    cout << "\nSum of Numbers = " << calculateSumOfNumbers(numbers, LENGTH) << endl;
    cout << "Average of Numbers = " << SUM_OF_NUMBERS / static_cast<float>(LENGTH);
}