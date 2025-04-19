#include <iostream>
using namespace std;

int main() {
    cout << "Enter the ending letter:" << endl;
    char endingLetter;
    cin >> endingLetter;

    for (char round = 'A'; round <= endingLetter; ++round) {
        for (char character = 'A'; character <= round; ++character)
            cout << character << " ";
        cout << endl;
    }
}