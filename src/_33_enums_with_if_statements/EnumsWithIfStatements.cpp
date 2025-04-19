#include <iostream>
using namespace std;

enum ScreenColor {
    Red = 1,
    Green = 2,
    Blue = 3
};

void printScreenColorMenu() {
    cout << "Please Choose the number of your color?" << endl;
    cout << "(1) Red" << endl;
    cout << "(2) Green" << endl;
    cout << "(3) Blue" << endl;
    cout << "Your Choice: " << endl;
}

int main() {
    printScreenColorMenu();
    short colorNumber;
    cin >> colorNumber;
    const ScreenColor SCREEN_COLOR = static_cast<ScreenColor>(colorNumber);
    if (SCREEN_COLOR == Red)
        system("color 4F");
    else if (SCREEN_COLOR == Green)
        system("color 2F");
    else if (SCREEN_COLOR == Blue)
        system("color 1F");
    else
        system("color 7F");
}