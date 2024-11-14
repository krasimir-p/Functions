#include <iostream>
#include <string>

using namespace std;

int getVowelsNumber(string inpString){
    int i = 0;
    int counter = 0;
    while (inpString[i]) {
        if (inpString[i] == 'a' || inpString[i] == 'A' || inpString[i] == 'e' || inpString[i] == 'E' || inpString[i] == 'i' || inpString[i] == 'I' || inpString[i] == 'u' || inpString[i] == 'U' || inpString[i] == 'o' || inpString[i] == 'O') {
            counter++;
        }
        i++;
    }
    return counter;
}

int main()
{
    string input;
    getline(cin, input);

    cout << getVowelsNumber(input) << endl;

    return 0;
}
