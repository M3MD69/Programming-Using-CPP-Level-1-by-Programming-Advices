using namespace std;
#include <iostream>

int main() {
    cout << (12 >= 12) << " | " << !(12 >= 12) << " | " << (1 && 1) << " | " << (7 == 7 && 7 > 5) << endl;
    cout << (12 > 7) << " | " << !(12 < 7) << " | " << (true && 0) << " | " << (7 == 7 && 7 < 5) << endl;
    cout << (8 < 6) << " | " << !(8 < 6) << " | " << (0 || 1) << " | " << (7 == 7 || 7 < 5) << endl;
    cout << (8 == 8) << " | " << !(8 == 8) << " | " << (0 || 0) << " | " << (7 < 7 || 7 > 5) << endl;
    cout << (12 <= 12) << " | " << !(12 <= 12) << " | " << !0 << " | " << (!(7 == 7) && 7 > 5) << endl;
    cout << (7 == 5) << " | " << !(7 == 5) << " | " << !(1 || 0) << " | " << (7 == 7 && !(7 < 5));
}