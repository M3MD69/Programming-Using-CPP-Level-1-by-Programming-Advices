#include <iostream>
using namespace std;

int getCountOfNumbers() {
    cout << "Enter Count of Numbers:" << endl;
    int countOfNumbers;
    cin >> countOfNumbers;
    return countOfNumbers;
}

void readNumbers(
    int numbers[],
    const int COUNT_OF_NUMBERS
) {
    for (int index = 0; index < COUNT_OF_NUMBERS; ++index) {
        cout << "Enter the number for index " << index << ":" << endl;
        cin >> numbers[index];
    }
}

int getStartingNumberForNonAddition() {
    cout << "Enter starting number for non-addition:" << endl;
    int startingNumberForNonAddition;
    cin >> startingNumberForNonAddition;
    return startingNumberForNonAddition;
}

int calculateSumOfNumbersLessThanTargetNumber(
    const int numbers[],
    const int COUNT_OF_NUMBERS,
    const int STARTING_NUMBER_FOR_NON_ADDITION
) {
    int sum = 0;
    for (int index = 0; index < COUNT_OF_NUMBERS; ++index) {
        const int CURRENT_NUMBER = numbers[index];
        if (CURRENT_NUMBER >= STARTING_NUMBER_FOR_NON_ADDITION)
            continue;
        sum += CURRENT_NUMBER;
    }
    return sum;
}

int main() {
    const int COUNT_OF_NUMBERS = getCountOfNumbers();
    int numbers[COUNT_OF_NUMBERS];
    readNumbers(numbers, COUNT_OF_NUMBERS);
    const int STARTING_NUMBER_FOR_NON_ADDITION = getStartingNumberForNonAddition();
    cout << "Sum of numbers less than " << STARTING_NUMBER_FOR_NON_ADDITION << " = " << calculateSumOfNumbersLessThanTargetNumber(numbers, COUNT_OF_NUMBERS, STARTING_NUMBER_FOR_NON_ADDITION);
}