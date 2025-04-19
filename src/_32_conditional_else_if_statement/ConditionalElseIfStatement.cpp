#include <iostream>
using namespace std;

int main() {
    int number = 5;
    cout << number << endl;
    if (number > 5)
        cout << "Number Bigger Than 5";
    else if (number == 5)
        cout << "Number Equal to 5";
    else
        cout << "Number Not Bigger Than 5";
}