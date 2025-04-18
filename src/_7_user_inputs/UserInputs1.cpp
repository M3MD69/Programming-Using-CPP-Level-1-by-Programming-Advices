#include <iostream>
using namespace std;

int main() {
    cout << "Enter Name:" << endl;
    string name;
    cin >> name;
    cout << "Enter Gender:" << endl;
    char gender;
    cin >> gender;
    cout << "Enter Age:" << endl;
    short age;
    cin >> age;
    cout << "Enter City:" << endl;
    string city;
    cin >> city;
    cout << "Enter Country:" << endl;
    string country;
    cin >> country;
    cout << "Enter Height:" << endl;
    float height;
    cin >> height;
    cout << "Enter Married:" << endl;
    bool married;
    cin >> married;

    const string STARS_LINE = "******************************";
    cout << STARS_LINE << endl;
    cout << "Name: " << name << endl;
    cout << "Gender: " << gender << endl;
    cout << "Age: " << age << endl;
    cout << "City: " << city << endl;
    cout << "Country: " << country << endl;
    cout << "Gender: " << height << endl;
    cout << "Married: " << married << endl;
    cout << STARS_LINE;
}