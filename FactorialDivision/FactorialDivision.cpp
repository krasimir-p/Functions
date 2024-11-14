#include <iostream>
#include <iomanip>

using namespace std;

long long getFactorial(int num) {
    if (num == 1 || num == 0) {
        return 1;
    }
    return num * getFactorial(num - 1);
}


int main()
{
    int num1, num2;
    cin >> num1 >> num2;

    cout << fixed << setprecision(2) << static_cast<double>(getFactorial(num1)) / getFactorial(num2) << endl;

    return 0;
}
