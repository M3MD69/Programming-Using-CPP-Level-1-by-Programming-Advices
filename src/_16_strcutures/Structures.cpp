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
    Person someone;

    cout << "Enter Name:" << endl;
    cin >> someone.name;
    cout << "Enter Gender:" << endl;
    cin >> someone.gender;
    cout << "Enter Age:" << endl;
    cin >> someone.age;
    cout << "Enter City:" << endl;
    cin >> someone.city;
    cout << "Enter Country:" << endl;
    cin >> someone.country;
    cout << "Enter Height:" << endl;
    cin >> someone.height;
    cout << "Enter Married:" << endl;
    cin >> someone.married;

    const string STARS_LINE = "******************************";

    cout << STARS_LINE << endl;
    cout << "Name: " << someone.name << endl;
    cout << "Gender: " << someone.gender << endl;
    cout << "Age: " << someone.age << endl;
    cout << "City: " << someone.city << endl;
    cout << "Country: " << someone.country << endl;
    cout << "Gender: " << someone.height << endl;
    cout << "Married: " << someone.married << endl;
    cout << STARS_LINE;
}