#include <iostream>
#include <string>

using namespace std;

bool checkLength(string password) {
    int i = 0;
    while (password[i]) {
        i++;
    }
    if (i >= 6 && i <= 10) {
        return true;
    }
    else {
        return false;
    }
}

bool checkSymbols(string password) {
    int i = 0;
    while (password[i]) {
        if (!((password[i] >= 'a' && password[i] <= 'z') || (password[i] >= 'A' && password[i] <= 'Z') || (password[i] >= '0' && password[i] <= '9'))) {
            return false;
        }
        i++;
    }
    return true;
}

bool checkNumberOfDigits(string password) {
    int i = 0;
    int counter = 0;
    while (password[i]) {
        if (password[i] >= '0' && password[i] <= '9') {
            counter++;
        }
        i++;
    }
    if (counter >= 2) {
        return true;
    }
    else {
        return false;
    }
}

int main()
{
    string password;
    getline(cin, password);

    bool validPassword = true;

    if (!checkLength(password)) {
        cout << "Password must be between 6 and 10 characters" << endl;
        validPassword = false;;
    }
    if (!checkSymbols(password)) {
        cout << "Password must consist only of letters and digits" << endl;
        validPassword = false;
    }
    if (!checkNumberOfDigits(password)) {
        cout << "Password must have at least 2 digits" << endl;
        validPassword = false;
    }

    if (validPassword) {
        cout << "Password is valid" << endl;
    }

    return 0;
}
