#include <iostream>

using namespace std;

void printRow(int num) {
    for (int i = 1; i <= num; i++) {
        cout << i << " ";
    }
    cout << endl;
}

void setNum(int number) {
    for (int i = 1; i <= number; i++) {
        printRow(i);
    }

    for (int i = number - 1; i >= 1; i--) {
        printRow(i);
    }
}

int main()
{
    int number;
    cin >> number;
    setNum(number);

	return 0;
}
