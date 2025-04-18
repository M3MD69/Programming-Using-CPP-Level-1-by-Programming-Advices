#include <iostream>
using namespace std;

int main() {
    const string STARS_LINE = "******************************";
    const string NAME = "Mohamed Sadawy";
    const char GENDER = 'M';
    const short AGE = 22;
    const string CITY = "Sohag";
    const string COUNTRY = "Egypt";
    const float HEIGHT = 170.0;
    const bool MARRIED = false;

    cout << STARS_LINE << endl;
    cout << "Name: " << NAME << endl;
    cout << "Gender: " << GENDER << endl;
    cout << "Age: " << AGE << endl;
    cout << "City: " << CITY << endl;
    cout << "Country: " << COUNTRY << endl;
    cout << "Gender: " << HEIGHT << endl;
    cout << "Married: " << MARRIED << endl;
    cout << STARS_LINE;
}