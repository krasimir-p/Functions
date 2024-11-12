#include <iostream>

using namespace std;

void checkSign(int num){
    if (num > 0) {
        cout << "The number " << num << " is positive." << endl;
    }
    else if (num == 0) {
        cout << "The number 0 is zero." << endl;
    }
    else {
        cout << "The number " << num << " is negative." << endl;
    }
}

int main()
{
    int number;
    cin >> number;

    checkSign(number);

    return 0;
}
