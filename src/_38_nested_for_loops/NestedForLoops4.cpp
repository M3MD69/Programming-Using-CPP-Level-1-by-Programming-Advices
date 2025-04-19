#include <iostream>
using namespace std;

int main() {
    cout << "Enter the ending number:" << endl;
    int endingNumber;
    cin >> endingNumber;

    for (int round = endingNumber; round >= 0; round--) {
        for (int index = 1; index <= endingNumber - round; index++)
            cout << index << " ";
        cout << endl;
    }
}