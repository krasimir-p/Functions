#include <iostream>

using namespace std;

//int getDigit(int number) {};

int main()
{
    int number;
    cin >> number;

    int tmp, oddSum = 0, evenSum = 0;
    while (number != 0) {
        tmp = number % 10;
        if (tmp % 2) {
            oddSum += tmp;
        }
        else {
            evenSum += tmp;
        }
        number /= 10;
    }

    cout << oddSum * evenSum << endl;

    return 0;
}
