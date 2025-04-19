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

string getWeekDay(const WeekDay WEEK_DAY) {
    switch (WEEK_DAY) {
    case Saturday:
        return "Saturday";
    case Sunday:
        return "Sunday";
    case Monday:
        return "Monday";
    case Tuesday:
        return "Tuesday";
    case Wednesday:
        return "Wednesday";
    case Thursday:
        return "Thursday";
    case Friday:
        return "Friday";
    default:
        return "Unknown";
    }
}

WeekDay readWeakDayNumber() {
    short dayNumber;
    cin >> dayNumber;
    return static_cast<WeekDay>(dayNumber);
}

int main() {
    printScreenColorMenu();
    cout << getWeekDay(readWeakDayNumber());
}