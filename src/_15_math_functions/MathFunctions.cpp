#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double firstNumber,
           secondNumber;

    cout << "Enter first number:" << endl;
    cin >> firstNumber;

    cout << "Enter second number:" << endl;
    cin >> secondNumber;

    // Absolute value
    cout << "abs(firstNumber): " << abs(firstNumber) << endl;
    cout << "fabs(firstNumber): " << fabs(firstNumber) << endl;

    // Square root and power
    cout << "sqrt(secondNumber): " << sqrt(secondNumber) << endl;
    cout << "pow(firstNumber, secondNumber): " << pow(firstNumber, secondNumber) << endl;

    // Trigonometric functions (input in radians)
    cout << "sin(firstNumber): " << sin(firstNumber) << endl;
    cout << "cos(firstNumber): " << cos(firstNumber) << endl;
    cout << "tan(firstNumber): " << tan(firstNumber) << endl;

    // Inverse Trigonometric
    cout << "asin(1): " << asin(1) << endl;
    cout << "acos(0): " << acos(0) << endl;
    cout << "atan(1): " << atan(1) << endl;

    // atan2
    cout << "atan2(secondNumber, firstNumber): " << atan2(secondNumber, firstNumber) << endl;

    // Exponential and logarithmic functions
    cout << "exp(1): " << exp(1) << endl;
    cout << "log(2.71828): " << log(2.71828) << endl;
    cout << "log10(1000): " << log10(1000) << endl;
    cout << "log2(8): " << log2(8) << endl;

    // Rounding functions
    cout << "ceil(firstNumber): " << ceil(firstNumber) << endl;
    cout << "floor(firstNumber): " << floor(firstNumber) << endl;
    cout << "round(firstNumber): " << round(firstNumber) << endl;
    cout << "trunc(firstNumber): " << trunc(firstNumber) << endl;

    // fmod and remainder
    cout << "fmod(firstNumber, secondNumber): " << fmod(firstNumber, secondNumber) << endl;
    cout << "remainder(firstNumber, secondNumber): " << remainder(firstNumber, secondNumber) << endl;

    // Hypotenuse
    cout << "hypot(firstNumber, secondNumber): " << hypot(firstNumber, secondNumber) << endl;

    // Other advanced math functions
    cout << "cbrt(firstNumber): " << cbrt(firstNumber) << endl;
    cout << "copysign(firstNumber, secondNumber): " << copysign(firstNumber, secondNumber) << endl;
    cout << "nextafter(firstNumber, secondNumber): " << nextafter(firstNumber, secondNumber);
}