#include <iostream>
using namespace std;

struct Name {
    string firstName,
           secondName;
};

enum Gender {
    Male, Female
};

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

struct Person {
    Name name;
    Gender gender;
    short age;
    string city;
    string country;
    float height;
    bool married;
    Color favouriteColor;
};

int main() {
    Person someone;
    someone.name.firstName = "Mohamed";
    someone.name.secondName = "Sadawy";
    someone.gender = Male;
    someone.age = 22;
    someone.city = "Sohag";
    someone.country = "Egypt";
    someone.height = 170;
    someone.married = false;
    someone.favouriteColor = Red;

    const string STARS_LINE = "******************************";

    cout << STARS_LINE << endl;
    cout << "Name: " << someone.name.firstName + " " + someone.name.secondName << endl;
    cout << "Gender: " << someone.gender << endl;
    cout << "Age: " << someone.age << endl;
    cout << "City: " << someone.city << endl;
    cout << "Country: " << someone.country << endl;
    cout << "Gender: " << someone.height << endl;
    cout << "Married: " << someone.married << endl;
    cout << "Favourite Color: " << someone.favouriteColor << endl;
    cout << STARS_LINE;
}