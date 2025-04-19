#include <iostream>
using namespace std;

struct FullName {
    string firstName, secondName;
};

struct MobileNumber {
    string countryCode, contactNumber;
};

struct Person {
    FullName fullName;
    short age;
    MobileNumber mobileNumber;
};

void readFullName(Person& person) {
    cout << "Enter First Name: " << endl;
    cin >> person.fullName.firstName;

    cout << "Enter Second Name: " << endl;
    cin >> person.fullName.secondName;
}

void readMobileNumber(Person& person) {
    cout << "Enter Country Code: " << endl;
    cin >> person.mobileNumber.countryCode;

    cout << "Enter Contact Number: " << endl;
    cin >> person.mobileNumber.contactNumber;
}

void readPerson(Person& person) {
    readFullName(person);

    cout << "Enter Age: " << endl;
    cin >> person.age;

    readMobileNumber(person);
}

void readPersons(Person person[2]) {
    cout << "First Person" << endl;
    readPerson(person[0]);

    cout << "********************" << endl;

    cout << "Second Person" << endl;
    readPerson(person[1]);
}

void printPerson(Person& person) {
    cout << "Full Name: " << person.fullName.firstName + " " + person.fullName.secondName << endl;
    cout << "Age: " << person.age << endl;
    cout << "Mobile Number: " << person.mobileNumber.countryCode + person.mobileNumber.contactNumber << endl;
}

void printPersons(Person persons[2]) {
    cout << "First Person" << endl;
    printPerson(persons[0]);

    cout << "********************" << endl;

    cout << "Second Person" << endl;
    printPerson(persons[1]);
}

int main() {
    Person persons[2];
    readPersons(persons);
    printPersons(persons);
}