#include <iostream>
using namespace std;

void printDetails(
    string fullName,
    short age,
    string city,
    string country
) {
    cout << "Full Name: " << fullName << endl;
    cout << "Age: " << age << endl;
    cout << "City: " << city << endl;
    cout << "Country: " << country << endl;
}

void readUserInputs() {
    cout << "Enter Full Name:" << endl;
    string fullName;
    getline(
        cin,
        fullName
    );

    cout << "Enter Age:" << endl;
    short age;
    cin >> age;

    cout << "Enter City:" << endl;
    string city;
    cin >> city;

    cout << "Enter Country:" << endl;
    string country;
    cin >> country;

    printDetails(
        fullName,
        age,
        city,
        country
    );
}

void printStarSquare() {
    string lineOfStars = "*****";
    cout << lineOfStars << endl;
    cout << lineOfStars << endl;
    cout << lineOfStars << endl;
    cout << lineOfStars << endl;
    cout << lineOfStars << endl;
}

void printSentences() {
    cout << "I love programming!" << endl;
    cout << "I hope to be the best developer ever!" << endl;
    cout << "I know it will take some time to practice, But i will achieve my goal." << endl;
    cout << "Best Regards,\nMohamed Sadawy" << endl;
}

void printH() {
    cout << "*   *" << endl;
    cout << "*   *" << endl;
    cout << "*****" << endl;
    cout << "*   *" << endl;
    cout << "*   *" << endl;
}

int main() {
    const string line = "------------------------------";
    cout << line << endl;
    readUserInputs();
    cout << line << endl;
    printStarSquare();
    cout << line << endl;
    printSentences();
    cout << line << endl;
    printH();
    cout << line;
}