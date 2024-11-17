#include <iostream>

using namespace std;

string numberToName(int number) {
    switch (number) {
    case 1:
        return "one ";
    case 2:
        return "two ";
    case 3:
        return "three ";
    case 4:
        return "four ";
    case 5:
        return "five ";
    case 6:
        return "six ";
    case 7:
        return "seven ";
    case 8:
        return "eight ";
    case 9:
        return "nine ";
    case 10:
        return "ten";
    case 11:
        return "eleven";
    case 12:
        return "twelve";
    case 13:
        return "thirteen";
    case 14:
        return "fourteen";
    case 15:
        return "fifteen";
    case 16:
        return "sixteen";
    case 17:
        return "seventeen";
    case 18:
        return "eighteen";
    case 19:
        return "nineteen";
    case 20:
        return "twenty";
    case 30:
        return "thirty";
    case 40:
        return "forty";
    case 50:
        return "fifty";
    case 60:
        return "sixty";
    case 70:
        return "seventy";
    case 80:
        return "eighty";
    case 90:
        return "ninety";
    }
}

int main()
{
    int number;
    cin >> number;

    if (number == 0) {
        cout << "zero" << endl;
        return 0;
    }
  
    int n1 = number % 10;
    number /= 10;
    int n2 = number % 10;
    number /= 10;
    int n3 = number % 10;
    int n4 = number / 10;
  
    if (n4 > 0) {
        cout << numberToName(n4) << "thousand ";
    }
    if (n3 > 0) {
        cout << numberToName(n3) << "hundred ";
    }
    if (n2 == 1) {
        cout << numberToName(10 + n1) << endl;
        return 0;
    }
    if (n2 > 1) {
        cout << numberToName(n2 * 10) << ' ';
    }
    if (n1 > 0) {
        cout << numberToName(n1) << endl;
    }

    return 0;
}
