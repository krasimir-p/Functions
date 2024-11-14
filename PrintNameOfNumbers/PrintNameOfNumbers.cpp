#include <iostream>

using namespace std;

string numberToName(int number) {
    switch (number) {
    case 0:
        return "";
        break;
    case 1:
        return "one ";
        break;

    case 2:
        return "two ";
        break;

    case 3:
        return "three ";
        break;

    case 4:
        return "four ";
        break;

    case 5:
        return "five ";
        break;

    case 6:
        return "six ";
        break;

    case 7:
        return "seven ";
        break;

    case 8:
        return "eight ";
        break;

    case 9:
        return "nine ";
        break;

    case 10:
        return "ten";
        break;
    case 11:
        return "eleven";
        break;

    case 12:
        return "twelve";
        break;

    case 13:
        return "thirteen";
        break;

    case 14:
        return "fourteen";
        break;

    case 15:
        return "fifteen";
        break;

    case 16:
        return "sixteen";
        break;

    case 17:
        return "seventeen";
        break;

    case 18:
        return "eighteen";
        break;

    case 19:
        return "nineteen";
        break;

    case 20:
        return "twenty";
        break;

    case 30:
        return "thirty";
        break;

    case 40:
        return "forty";
        break;

    case 50:
        return "fifty";
        break;

    case 60:
        return "sixty";
        break;

    case 70:
        return "seventy";
        break;

    case 80:
        return "eighty";
        break;

    case 90:
        return "ninety";
        break;
    }
}

void till20(int number) {
    cout << numberToName(number) << endl;
}

void till99(int number) {
    if (number > 20) {
        cout << numberToName(number - number % 10) << ' ';
        till20(number % 10);
    }
    else {
        till20(number);
    }
}

void till999(int number) {
    if (number > 99) {
        cout << numberToName(number / 100) << "hundred ";
        till99(number % 100);
    } 
    else {
        till99(number);
    }
}

void till9999(int number) {
    if (number > 999) {
        cout << numberToName(number / 1000) << "thousand ";
        till999(number % 1000);
    }
    else {
        till999(number);
    }
}

int main()
{
    int number;
    cin >> number;

    if (number == 0) {
        cout << "zero" << endl;
    }
    else if (number <= 20) {
        till20(number);
    }
    else if (number <= 99) {
        till99(number);
    }
    else if (number <= 999) {
        till999(number);
    }
    else if (number <= 9999) {
        till9999(number);
    }
    return 0;
}
