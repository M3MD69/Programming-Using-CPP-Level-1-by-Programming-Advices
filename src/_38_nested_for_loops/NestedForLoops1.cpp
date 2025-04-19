#include <iostream>
using namespace std;

int main() {
    const char FIRST_LETTER = 'A',
               SECOND_LETTER = 'Z';
    for (char firstCharacter = FIRST_LETTER; firstCharacter <= SECOND_LETTER; ++firstCharacter)
        for (char secondCharacter = FIRST_LETTER; secondCharacter <= SECOND_LETTER; ++secondCharacter)
            cout << firstCharacter
                << secondCharacter
                << endl;
}