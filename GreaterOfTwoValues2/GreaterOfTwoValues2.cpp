#include <iostream>
#include <string>

using namespace std;

int getBiggerInt(int num1, int num2) {
    int biggerInt;
    num1 >= num2 ? biggerInt = num1 : biggerInt = num2;
    return biggerInt;
}

char getBiggerChar(char symbol1, char symbol2) {
    char biggerChar;
    symbol1 >= symbol2 ? biggerChar = symbol1 : biggerChar = symbol2;
    return biggerChar;
}

string getBiggerString(string str1, string str2) {
    string biggerString;
    str1 >= str2 ? biggerString = str1 : biggerString = str2;
    return biggerString;
}

int main()
{
    string type;
    cin >> type;

    switch (type[0]) {
    case 'i':
        int n1, n2;
        cin >> n1 >> n2;
        cout << getBiggerInt(n1, n2) << endl;
        break;
    case 'c':
        char c1, c2;
        cin >> c1 >> c2;
        cout << getBiggerChar(c1, c2) << endl;
        break;
    case 's':
        string s1, s2;
        cin.ignore();
        getline(cin, s1);
        getline(cin, s2);
        cout << getBiggerString(s1, s2) << endl;
        break;
    }

    return 0;
}
