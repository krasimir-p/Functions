#include <iostream>

using namespace std;

int getPower(int base, int exp) {
    int power = 1;
    for (int i = 1; i <= exp; i++) {
        power *= base;
    }
    return power;
}

int main()
{
    int base, exp;
    cin >> base >> exp;

    cout << getPower(base, exp);

    return 0;
}
