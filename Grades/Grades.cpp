#include <iostream>

using namespace std;

void gradeMark(float grade) {
    if (grade <= 2.99) {
        cout << "Fail" << endl;
    }
    else if (grade<=3.49) {
        cout << "Poor" << endl;
    }
    else if (grade <= 4.49) {
        cout << "Good" << endl;
    }
    else if (grade <= 5.49) {
        cout << "Very good" << endl;
    }
    else
    {
        cout << "Excellent" << endl;
    }
}

int main()
{
    float grade;
    cin >> grade;

    gradeMark(grade);

    return 0;
}
