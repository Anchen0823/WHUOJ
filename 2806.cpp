#include <iostream>
using namespace std;

bool isLeapyear(int y) {
    if ((y % 4 == 0) && (y % 100) != 0) return true;
    if (y % 400 == 0) return true;
    return false;
}

int main() {
    int y;
    cin >> y;
    if (isLeapyear(y)) cout << "yes" << endl;
    else cout << "no" << endl;

    return 0;
}