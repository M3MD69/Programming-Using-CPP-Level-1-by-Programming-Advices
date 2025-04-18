#include <iostream>
using namespace std;

int main() {
    const string TEXT = "43.22";
    cout << "String to Double -> " << stod(TEXT) << endl;
    cout << "String to Float -> " << stof(TEXT) << endl;
    cout << "String to Integer -> " << stoi(TEXT) << endl;
    const int INTEGER_NUMBER = 22;
    cout << "Integer to String -> " << to_string(INTEGER_NUMBER) << endl;
    const double DOUBLE_NUMBER = 33.5;
    cout << "Double to String -> " << to_string(DOUBLE_NUMBER) << endl;
    const float FLOAT_NUMBER = 55.23;
    cout << "Float to String -> " << to_string(FLOAT_NUMBER) << endl;
    cout << "Float to Integer -> " << static_cast<int>(FLOAT_NUMBER);
}