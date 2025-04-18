#include <iostream>
using namespace std;

int main() {
    cout << "Enter Age:" << endl;
    int age;
    cin >> age;
    cout << "Enter Increase Years:" << endl;
    int increaseYears;
    cin >> increaseYears;
    const int AGE_AFTER_INCREASE = age + increaseYears;
    cout << "After " << increaseYears << " years you will be " << AGE_AFTER_INCREASE;
}