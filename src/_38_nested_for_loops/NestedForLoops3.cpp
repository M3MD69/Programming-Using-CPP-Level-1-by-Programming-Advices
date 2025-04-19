#include <iostream>
using namespace std;

int main() {
    cout << "Enter the starting number:" << endl;
    int startingNumber;
    cin >> startingNumber;

    for (int firstIndex = 0; firstIndex <= startingNumber; ++firstIndex) {
        for (int secondIndex = 1; secondIndex <= startingNumber - firstIndex; ++secondIndex)
            cout << secondIndex << " ";
        cout << endl;
    }
}