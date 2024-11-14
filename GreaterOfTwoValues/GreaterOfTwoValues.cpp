#include <iostream>
#include <string>

using namespace std;

int getGreaterInt(int n1, int n2) {
    if (n1 >= n2) {
        return n1;
    }
    else {
        return n2;
    }
}

char getGreaterChar(char c1, char c2) {
    if (c1 >= c2) {
        return c1;
    }
    else {
        return c2;
    }
}

int stringLength(string str) {
    int i = 0;
    while (str[i]) {
        i++;
    }
    return i;
}

string getGreaterString1(string s1, string s2) {
    if (stringLength(s1) > stringLength(s2)) {
        return s1;
    }
    else if (stringLength(s1) < stringLength(s2)) {
        return s2;
    }
    else {
        int i = 0;
        while (s1[i] && s2[i]) {
            char tmp = getGreaterChar(s1[i], s2[i]);
            if (tmp == s1[i] && tmp == s2[i]) {
                i++;
            }
            else if (tmp == s1[i]) {
                return s1;
            }
            else if (tmp == s2[i]) {
                return s2;
            }

        }
    }
}

string getGreaterString(string s1, string s2) {
    int i = 0;
    while (s1[i] && s2[i]) {
        char tmp = getGreaterChar(s1[i], s2[i]);
        if (tmp == s1[i] && tmp == s2[i]) {
            i++;
        }
        else if (tmp == s1[i]) {
            return s1;
        }
        else if (tmp == s2[i]) {
            return s2;
        }

    }
}


int main()
{
    string typeData;
    cin >> typeData;

    int number1, number2;
    char symbol1, symbol2;
    string str1, str2;

    if (typeData == "int") {
        cin >> number1 >> number2;
        cout << getGreaterInt(number1, number2) << endl;
    }
    else if (typeData == "char") {
        cin >> symbol1 >> symbol2;
        cout << getGreaterChar(symbol1, symbol2) << endl;
    }
    else if (typeData == "string") {
        cin.ignore();
        getline(cin, str1);
        getline(cin, str2);
        cout << getGreaterString(str1, str2) << endl;
    }

    return 0;
}
