#include <iostream>
using namespace std;

enum Gender { Male, Female };

enum Color {
    Black,
    Red,
    DeepSkyBlue,
    LimeGreen,
    Gold,
    Crimson,
    Burgundy,
    DeepPink
};

struct FullName {
    string firstName, secondName;
};

struct Person {
    FullName fullName;
    Gender gender;
    short age;
    string city;
    string country;
    float height;
    bool married;
    Color favouriteColor;
};

void readFullName(Person& person) {
    person.fullName.firstName = "Mohamed";
    person.fullName.secondName = "Sadawy";
}

void readInformation(Person& person) {
    readFullName(person);
    person.gender = Male;
    person.age = 22;
    person.city = "Sohag";
    person.country = "Egypt";
    person.height = 170;
    person.married = false;
    person.favouriteColor = Red;
}

void printInformation(const Person& PERSON) {
    cout << "Full Name: " << PERSON.fullName.firstName + " " + PERSON.fullName.secondName << endl;
    cout << "Gender: " << PERSON.gender << endl;
    cout << "Age: " << PERSON.age << endl;
    cout << "City: " << PERSON.city << endl;
    cout << "Country: " << PERSON.country << endl;
    cout << "Height: " << PERSON.height << endl;
    cout << "Married: " << PERSON.married << endl;
    cout << "Favourite Color: " << PERSON.favouriteColor;
}

int main() {
    Person person;
    readInformation(person);
    printInformation(person);
}