#include <iostream>
using namespace std;

int main() {
    const int LENGTH = 10;
    const int NUMBERS[LENGTH] = {LENGTH, 20, 44, 55, 33, 22, 99, 88, 99, 100};

    const int TARGET_NUMBER = 20;
    cout << "Target Number = " << TARGET_NUMBER << endl;

    const string LINE = "********************";
    cout << LINE << endl;

    for (int index = 0; index < LENGTH; ++index) {
        const int CURRENT_NUMBER = NUMBERS[index];
        cout << "Current Number = " << CURRENT_NUMBER << endl;

        if (CURRENT_NUMBER == TARGET_NUMBER) {
            cout << LINE << endl;
            cout << "Found at Position " << index;
            break;
        }
    }
}