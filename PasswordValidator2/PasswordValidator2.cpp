#include <iostream>
#include <string>

using namespace std;

void checkPassword(string password, bool& lengthPasswordCondition, bool& consistencyPasswordCondition, bool& digitCountPasswordCondition) {
    int lengthPassword = password.length();
    int digitsCount=0;

    if (lengthPassword < 6 || lengthPassword > 10) {
        lengthPasswordCondition = false;
    }

    for (int i = 0; i < lengthPassword; i++) {
        if (!((password[i] >= 'a' && password[i] <= 'z') || (password[i] >= 'A' && password[i] <= 'Z') || (password[i] >= '0' && password[i] <= '9'))) {
            consistencyPasswordCondition =  false;
        }
        if (password[i] >= '0' && password[i] <= '9') {
            digitsCount++;
        }
    }

    if (digitsCount < 2) {
        digitCountPasswordCondition = false;
    }
}

int main()
{
    string password;
    getline(cin, password);

    bool lengthCondition = true, consistencyCondition = true, digitsCountCondition = true;

    checkPassword(password, lengthCondition, consistencyCondition, digitsCountCondition);

    if (lengthCondition && consistencyCondition && digitsCountCondition) {
        cout << "Password is valid" << endl;
    }
    if (lengthCondition == false) {
        cout << "Password must be between 6 and 10 characters" << endl;
    }
    if (consistencyCondition == false) {
        cout << "Password must consist only of letters and digits" << endl;
    }
    if (digitsCountCondition == false) {
        cout << "Password must have at least 2 digits" << endl;
    }
    return 0;
}
