#include <iostream>
using namespace std;

int main() {
    cout << "Enter the starting number:" << endl;
    int endingNumber;
    cin >> endingNumber;

    for (int round = 1; round <= endingNumber; ++round) {
        for (int index = round; index <= endingNumber; ++index)
            cout << index << " ";
        cout << endl;
    }
}