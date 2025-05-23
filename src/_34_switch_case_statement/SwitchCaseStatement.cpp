#include <iostream>
using namespace std;

enum WeekDay {
    Saturday = 1,
    Sunday = 2,
    Monday = 3,
    Tuesday = 4,
    Wednesday = 5,
    Thursday = 6,
    Friday = 7
};

void printScreenColorMenu() {
    cout << "Please choose the number of day?" << endl;
    cout << "(1) Saturday" << endl;
    cout << "(2) Sunday" << endl;
    cout << "(3) Monday" << endl;
    cout << "(4) Tuesday" << endl;
    cout << "(5) Wednesday" << endl;
    cout << "(6) Thursday" << endl;
    cout << "(7) Friday" << endl;
    cout << "Your Choice:" << endl;
}

int main() {
    printScreenColorMenu();
    short dayNumber;
    cin >> dayNumber;
    const WeekDay WEEK_DAY = static_cast<WeekDay>(dayNumber);
    switch (WEEK_DAY) {
    case 1:
        cout << "Saturday";
        break;
    case 2:
        cout << "Sunday";
        break;
    case 3:
        cout << "Monday";
        break;
    case 4:
        cout << "Tuesday";
        break;
    case 5:
        cout << "Wednesday";
        break;
    case 6:
        cout << "Thursday";
        break;
    case 7:
        cout << "Friday";
        break;
    default:
        cout << "Unknown";
    }
}