#include <iostream>

using namespace std;

int sum(int num1, int num2) {
    return num1 + num2;
}

int subtraction(int num1, int num2) {
    return num1 - num2;
}

int product(int num1, int num2) {
    return num1 * num2;
}

double division(int num1, int num2) {
    return static_cast<double>(num1) / num2;
}
int main()
{
    int num1, num2;
    char sign;
    cin >> num1 >> num2 >> sign;


    switch (sign)
    {
    case '+':
        cout << sum(num1, num2) << endl;
        break;
    case '-':
        cout << subtraction(num1, num2) << endl;
        break;
    case '*':
        cout << product(num1, num2) << endl;
        break;
    case '/':
        cout << division(num1, num2) << endl;
        break;
    default:
        return 0;
    }
    return 0;
}
