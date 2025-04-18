#include <iostream>
using namespace std;

int main() {
    cout << "1 -> " << ((5 > 6 and 7 == 7) or (1 or 0)) << endl;
    cout << "2 -> " << (!(5 > 6 and 7 == 7) or (1 or 0)) << endl;
    cout << "3 -> " << (!(5 > 6 and 7 == 7) or !(1 or 0)) << endl;
    cout << "4 -> " << (!(5 > 6 or 7 == 7) and !(1 or 0)) << endl;
    cout << "5 -> " << ((5 > 6 and 7 <= 7) or (8 > 1 and 4 <= 3) and true) << endl;
    cout << "6 -> " << ((5 > 6 and !(7 <= 8)) and (8 > 1 or 4 <= 3) or true);
}