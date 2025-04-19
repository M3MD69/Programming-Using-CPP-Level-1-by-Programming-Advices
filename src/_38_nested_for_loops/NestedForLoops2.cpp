#include <iostream>
using namespace std;

int main() {
    cout << "Enter the starting number of stars:" << endl;
    int startingNumberOfStars;
    cin >> startingNumberOfStars;

    for (int firstIndex = 0; firstIndex < startingNumberOfStars; ++firstIndex) {
        for (int secondIndex = firstIndex; secondIndex < startingNumberOfStars; ++secondIndex)
            cout << "*";
        cout << endl;
    }
}