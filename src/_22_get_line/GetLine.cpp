#include <iostream>
using namespace std;

int main() {
    cout << "Enter Age:" << endl;
    short age;
    cin >> age;

    cout << "Enter Name:" << endl;
    string name;
    cin.ignore(
        1,
        '\n'
    );
    getline(
        cin,
        name
    );

    cout << "Enter Conutry:" << endl;
    string country;
    cin >> country;

    cout << "Age: " << age << endl;
    cout << "Name: " << name << endl;
    cout << "Country: " << country;
}