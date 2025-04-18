#include <iostream>
using namespace std;

int main() {
    const short INCREASE_YEARS = 5;
    const short AGE = 22;
    const short AGE_AFTER_INCREASE = AGE + INCREASE_YEARS;
    cout << "After " << INCREASE_YEARS << " years you will be " << AGE_AFTER_INCREASE;
}