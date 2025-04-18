#include <iostream>
using namespace std;

struct Person {
    string name;
    char gender;
    short age;
    string city;
    string country;
    float height;
    bool married;
};

int main() {
    Person SOMEONE;

    cout << "Enter Name:" << endl;
    cin >> SOMEONE.name;
    cout << "Enter Gender:" << endl;
    cin >> SOMEONE.gender;
    cout << "Enter Age:" << endl;
    cin >> SOMEONE.age;
    cout << "Enter City:" << endl;
    cin >> SOMEONE.city;
    cout << "Enter Country:" << endl;
    cin >> SOMEONE.country;
    cout << "Enter Height:" << endl;
    cin >> SOMEONE.height;
    cout << "Enter Married:" << endl;
    cin >> SOMEONE.married;

    const string STARS_LINE = "******************************";

    cout << STARS_LINE << endl;
    cout << "Name: " << SOMEONE.name << endl;
    cout << "Gender: " << SOMEONE.gender << endl;
    cout << "Age: " << SOMEONE.age << endl;
    cout << "City: " << SOMEONE.city << endl;
    cout << "Country: " << SOMEONE.country << endl;
    cout << "Gender: " << SOMEONE.height << endl;
    cout << "Married: " << SOMEONE.married << endl;
    cout << STARS_LINE;
}