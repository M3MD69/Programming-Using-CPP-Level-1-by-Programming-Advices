#include <iostream>
using namespace std;

int main() {
    const int FIRST_NUMBER = 20,
              SECOND_NUMBER = 30,
              THIRD_NUMBER = 10;
    const int TOTAL_NUMBERS = FIRST_NUMBER + SECOND_NUMBER + THIRD_NUMBER;
    cout << FIRST_NUMBER << " +" << endl;
    cout << SECOND_NUMBER << " +" << endl;
    cout << THIRD_NUMBER << " +" << endl;
    cout << "----------" << endl;
    cout << "Total: " << TOTAL_NUMBERS;
}