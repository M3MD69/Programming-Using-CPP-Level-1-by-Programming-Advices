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

void readPersons(
    Person person[],
    const int PERSON_COUNT
) {
    for (int index = 0; index < PERSON_COUNT; ++index) {
        cout << "Person (" << index << ")" << endl;
        readPerson(person[index]);
    }
}

void printPerson(Person& person) {
    cout << "Full Name: " << person.fullName.firstName + " " + person.fullName.secondName << endl;
    cout << "Age: " << person.age << endl;
    cout << "Mobile Number: " << person.mobileNumber.countryCode + person.mobileNumber.contactNumber << endl;
}

void printPersons(
    Person person[],
    const int PERSON_COUNT
) {
    for (int index = 0; index < PERSON_COUNT; ++index) {
        cout << "Person (" << index << ")" << endl;
        printPerson(person[index]);
    }
}

int main() {
    cout << "Enter Person Count:" << endl;
    int personCount;
    cin >> personCount;

    Person persons[personCount];

    readPersons(persons, personCount);
    printPersons(persons, personCount);
}